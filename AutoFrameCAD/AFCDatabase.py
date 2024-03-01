import json
import sqlite3

from AFCConstants import DATABASE_PATH, LUMBERTYPES_JSON_PATH
from StenLib.StenDecorators import ErrorHandler as StenErrorHandler


class Database:
    """A class used to represent a database."""

    @StenErrorHandler(sqlite3.Error, FileNotFoundError)
    def __init__(self, path: str) -> None:
        """Initializes the database object.

        Args:
            path (str): The path to the database.
        """
        self._conn: sqlite3.Connection = sqlite3.connect(path)
        self._curs: sqlite3.Cursor = self._conn.cursor()

    @StenErrorHandler(sqlite3.Error)
    def _exec_sql(self, sql: str, id: int | None = None) -> None:
        """Executes a sql.

        Args:
            sql (str): The sql to be executed.
            id (int): The id of the type. Defaults to None.
        """
        with self._conn:
            if id is None:
                self._curs.execute(sql)
            else:
                self._curs.execute(sql + ' WHERE id=?', (id,))

    def _get_sql_type(self, value: int | float | str | bytes | None) -> str:
        """Gets the sql type of a value.

        Args:
            value (int | float | str | bytes): The value to be checked.
        """
        if value is None:
            return 'NULL'
        return {
            int: 'INTEGER',
            float: 'REAL',
            str: 'TEXT',
            bytes: 'BLOB',
        }.get(type(value), 'NULL')

    def _open_json(
        self, path: str
    ) -> dict[str, list[dict[str, None | int | float | str | bytes]]]:
        """Opens a json file.

        Args:
            path (str): The path to the json file.
        """
        with open(path, 'r') as _file:
            return json.load(_file)

    @StenErrorHandler(sqlite3.Error)
    def add_data(self, path: str) -> None:
        """Inserts data into the table.

        Args:
            path (str): The path to the json file.
        """
        for _table, _rows in self._open_json(path).items():
            with self._conn:
                _cols_with_types = ', '.join(
                    [
                        f'{k} {self._get_sql_type(v)}'
                        for k, v in _rows[0].items()
                        if k != 'id'
                    ]
                )
                _create_table_sql = f"""CREATE TABLE IF NOT EXISTS {_table}
                                        (id INTEGER PRIMARY KEY,
                                        {_cols_with_types})"""
                self._curs.execute(_create_table_sql)

                for _row in _rows:
                    _cols = ', '.join(_row.keys())
                    _placeholders = ', '.join('?' * len(_row))
                    _insert_sql = f"""INSERT OR REPLACE INTO {_table} ({_cols})
                                    VALUES ({_placeholders})"""
                    self._curs.execute(_insert_sql, tuple(_row.values()))

    @StenErrorHandler(sqlite3.Error)
    def del_data(self, table: str, id: int | None = None) -> None:
        """Deletes data from the table.

        Args:
            table (str): The name of the table.
            id (int): The id of the type.
        """
        self._exec_sql(f'DELETE FROM {table}', id)

    @StenErrorHandler(sqlite3.Error)
    def get_data(
        self, table: str, id: int | None = None
    ) -> list[tuple[str, None | int | float | str | bytes]]:
        """Gets data from the table.

        Args:
            table (str): The name of the table.
            id (int): The id of the type. Defaults to None.
                If None, returns all rows.
        """
        self._exec_sql(f'SELECT * FROM {table}', id)
        return self._curs.fetchall()

    @StenErrorHandler(sqlite3.Error)
    def __del__(self) -> None:
        """Closes the database connection."""
        self._conn.close()


table = 'test_table'
db = Database(DATABASE_PATH)
db.add_data(LUMBERTYPES_JSON_PATH)
print(db.get_data(table))
print(db.get_data(table, id=0))
print(db.get_data(table, id=1))
print(db.get_data(table, id=2))
