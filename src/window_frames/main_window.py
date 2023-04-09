# These lines of code are importing necessary modules and packages for the program to run.

# Third-party imports
from PyQt6.QtCore import QMargins, QSize, Qt
from PyQt6.QtGui import QColor, QIcon, QPalette, QPixmap
from PyQt6.QtWidgets import (QGroupBox, QHBoxLayout, QLabel, QPushButton,
                             QVBoxLayout, QWidget, QStyleFactory)

# Internal module imports
from constants import (TFCCAD_COPYRIGHT_LABEL, TFCCAD_GROUPBOX_TITLE,
                       TFCCAD_MAIN_WINDOW_BUTTON_ICONS,
                       TFCCAD_MAIN_WINDOW_BUTTON_SIZE,
                       TFCCAD_MAIN_WINDOW_BUTTON_TEXTS,
                       TFCCAD_MAIN_WINDOW_CONTENTS_MARGINS,
                       TFCCAD_MAIN_WINDOW_ICON_PATH, TFCCAD_MAIN_WINDOW_TITLE)
from events.key_press_events import close_on_key_press
from helpers.ms_colormode import detect_colormode_in_microsoft


# The class MainWindow is a QWidget used in Python programming.
class MainWindow(QWidget):
    def __init__(self):
        """
        This function initializes a user interface with a group box and copyright label, and sets the
        current theme to 0.
        """
        super().__init__()

        self.setup_ui()

        self.crlabel = QLabel(TFCCAD_COPYRIGHT_LABEL)

        self.main_layout = QVBoxLayout(self)
        self.main_layout.setContentsMargins(QMargins(0, 0, 0, 0))
        self.main_layout.addWidget(
            self.group_box, alignment=Qt.AlignmentFlag.AlignTop)
        self.main_layout.addWidget(
            self.crlabel, alignment=Qt.AlignmentFlag.AlignLeft)

        self.adjustSize()

    def setup_ui(self):
        """
        This function sets up the user interface of a main window in a Python program.
        """
        self.setWindowTitle(TFCCAD_MAIN_WINDOW_TITLE)
        self.setWindowIcon(QIcon(TFCCAD_MAIN_WINDOW_ICON_PATH))
        self.margins = QMargins(*TFCCAD_MAIN_WINDOW_CONTENTS_MARGINS)
        self.setContentsMargins(self.margins)
        self.setStyle(QStyleFactory.create("Fusion"))

        self.create_group_box()

    def create_group_box(self):
        """
        This function creates a group box with a horizontal layout, a title, centered alignment, and
        stretchable buttons.
        """
        self.group_box = QGroupBox(self)
        self.group_box_layout = QHBoxLayout(self.group_box)
        self.group_box.setStyleSheet("QGroupBox { border: 0; padding-top: 20; }")
        self.group_box.setTitle(TFCCAD_GROUPBOX_TITLE)
        self.group_box.setAlignment(Qt.AlignmentFlag.AlignHCenter)
        self.group_box.setFlat(True)

        #self.create_buttons()
        self.group_box_layout.addStretch()

    def create_buttons(self):
        """
        This function creates buttons with icons and tooltips and adds them to a group box layout.
        """
        self.buttons = []
        for button_text, button_icon_path in zip(TFCCAD_MAIN_WINDOW_BUTTON_TEXTS, TFCCAD_MAIN_WINDOW_BUTTON_ICONS):
            button = QPushButton()
            button.setToolTip(" ".join(button_text.split("_")).title())
            button.setFixedSize(QSize(*TFCCAD_MAIN_WINDOW_BUTTON_SIZE))
            button.setIcon(QIcon(QPixmap(button_icon_path)))
            self.group_box_layout.addWidget(button)
            self.buttons.append(button)

    def keyPressEvent(self, ui, event):
        """
        Calls all the keyPressEvent functions in the main window.
        """
        close_on_key_press(ui, event)
