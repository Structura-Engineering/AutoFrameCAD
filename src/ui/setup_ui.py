# from PySide6.QtCore import Qt
from PySide6.QtGui import QFont
from PySide6.QtWidgets import QLabel, QWidget

from constants import (
    COPYRIGHT_LABEL,
    COPYRIGHT_LABEL_SIZE,
    COPYRIGHT_LABEL_STYLE,
    UI_FONT_TYPE,
)
from handlers.main_handler import MainHandler

# TODO: Move handlers and events and etc. into their own files.
# CAREFUL! to not create circular imports, so import them first into SetupUI and then to the UIs.


class SetupUI(QWidget):
    def __init__(self):
        super().__init__()
        self.main_handler_instance = MainHandler()

    def create_crlabel(self) -> QLabel:
        """
        This function creates a QLabel object with a text string containing a copyright label.
        """
        self.crlabel = QLabel(COPYRIGHT_LABEL)
        self.crlabel.setFont(QFont(UI_FONT_TYPE, COPYRIGHT_LABEL_SIZE))
        self.crlabel.setStyleSheet(COPYRIGHT_LABEL_STYLE)

        return self.crlabel

    # def keyPressEvent(self, event):
    #     # TODO: Combine keyPressEvent with the similar on in config_ui and move them to setup_ui.py.
    #     """
    #     This function is called when certain keys are pressed.
    #     """
    #     if event.key() == Qt.Key.Key_Escape or (
    #         event.key() == Qt.Key.Key_Q
    #         and event.modifiers() == Qt.KeyboardModifier.ControlModifier
    #     ):
    #         self.close()
    #         if self.config_ui_instance:
    #             self.config_ui_instance.close()

    #     else:
    #         super().keyPressEvent(event)
