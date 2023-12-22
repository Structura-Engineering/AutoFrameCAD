import os
from dataclasses import dataclass

from constants import ICONS_FOLDER_PATH
from data.types_data import LumberTypesData
from PySide6.QtGui import QIcon
from PySide6.QtWidgets import QMessageBox


@dataclass
class InputDialogTypeHints:
    """A class used to represent an input dialog type hint."""

    title: str
    icon_path: QIcon
    icon_type: QMessageBox.Icon
    size: list | None
    text: str
    data: type


class LumberTypeConfig(InputDialogTypeHints):
    """A class used to represent an input dialog config."""

    def __init__(self):
        super().__init__(
            title="Select Lumber Type",
            icon_path=QIcon(os.path.join(ICONS_FOLDER_PATH + "ui_icon.png")),
            icon_type=QMessageBox.Icon.Information,
            size=None,
            text="Choose a lumber type:",
            data=LumberTypesData(),  # TODO: Fix this error.
        )