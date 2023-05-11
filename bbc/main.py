import sys

from PySide6.QtWidgets import *

from bbc.ui.main_ui import MainUI


def run():
    """
    Initializes a QApplication object and a MainUI object,
    shows the MainUI object,
    and starts the application event loop.
    """
    app = QApplication.instance() or QApplication(sys.argv)
    main_ui = MainUI()
    main_ui.show()
    sys.exit(app.exec())


if __name__ == "__main__":
    run()