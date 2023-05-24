import os

from PySide6.QtCore import Qt

# General
UI_TITLE = "AFC"
UI_ICON_PATH = os.path.join("bbc/icons/ui_icon.png")

# Copyright label
COPYRIGHT_LABEL = "© 2023 Qerimi Engineering. All rights reserved."
COPYRIGHT_LABEL_SIZE = 8
COPYRIGHT_LABEL_STYLE = "font-style: italic;"

# Config UI
VIEWER_UI_TITLE = "3D Viewer"

VIEWER_UI_BUTTON_ICON_LIGHT_PATH = os.path.join("bbc/icons/viewer_icon_light.png")
VIEWER_UI_BUTTON_ICON_DARK_PATH = os.path.join("bbc/icons/viewer_icon_dark.png")
VIEWER_UI_BUTTON_ICON_FLIPPED_LIGHT_PATH = os.path.join(
    "bbc/icons/viewer_icon_flipped_light.png"
)
VIEWER_UI_BUTTON_ICON_FLIPPED_DARK_PATH = os.path.join(
    "bbc/icons/viewer_icon_flipped_dark.png"
)

# SettingsListWidget
DROPDOWN_LIST_GENERAL = ["Option 1", "Option 2", "Option 3"]
DROPDOWN_LIST_SOUND = ["On", "Off"]
SETTINGS_LIST = [
    ("Structure", "dropdown", DROPDOWN_LIST_GENERAL),
    ("Wrapping at Inserts", "input_text", []),
    ("Wrapping at Ends", "input_int", []),
    ("Width", "dropdown", DROPDOWN_LIST_SOUND),
    ("Function", "checkbox", []),
    ("Test", "button", []),
]
HORIZONTAL_HEADER_LABELS = ["Parameter", "Value"]
SETTINGS_DATABASE_PATH = os.path.join("bbc/data/settings.sqlite")
CHECKBOX_STYLE = "QCheckBox {margin-left: 100%; margin-right: 100%; padding-left: -10px; padding-right: -10px;}"

# LabelWidget
LABELS = [
    {
        "index": 0,
        "title": "© 2023 Qerimi Engineering. All rights reserved.",
        "stylesheet": "QLabel { font-size: 12px; font-style: italic; }",
        "alignment": Qt.AlignmentFlag.AlignLeft,
    },
    {
        "index": 1,
        "title": "Test 1",
        "stylesheet": "QLabel { font-size: 8px; font-style: italic; }",
        "alignment": Qt.AlignmentFlag.AlignCenter,
    },
    {
        "index": 2,
        "title": "Test 2",
        "stylesheet": "QLabel { font-size: 8px; font-style: italic; }",
        "alignment": Qt.AlignmentFlag.AlignRight,
    },
]

# TODO: Add function that toggles the button icon based on isVisible().
# ButtonWidget
BUTTONS = [
    {
        "index": 0,
        "title": "ThemeButton",
        "size": (30, 30),
        "icon_path": os.path.join("bbc/icons/theme_icon_default_light.png"),
    },
    {
        "index": 1,
        "title": "ViewerButton",
        "size": (30, 30),
        "icon_path": os.path.join("bbc/icons/viewer_icon_light.png"),
    },
    {
        "index": 2,
        "title": "Save",
        "size": (50, 30),
        "icon_path": None,
    },
    {
        "index": 3,
        "title": "Discard",
        "size": (50, 30),
        "icon_path": None,
    },
]  # Dont forget to add the necessary code into the EventHandler.

# ThemeHandler
WINREG_THEME_KEY = os.path.join(
    r"SOFTWARE\Microsoft\Windows\CurrentVersion\Themes\Personalize"
)
MS_VALUE_NAME = "AppsUseLightTheme"

DEBUG_NAME = "[DEBUG] "

THEME_DARK = "dark"
THEME_LIGHT = "light"
THEME_SYSTEM_DEFAULT = "system_default"

THEME_FOLDER_PATH = os.path.join("bbc/themes/")
ICONS_FOLDER_PATH = os.path.join("bbc/icons/")

THEME_FILE_PATHS = {
    THEME_DARK: os.path.join(THEME_FOLDER_PATH, "dark_theme.css"),
    THEME_LIGHT: os.path.join(THEME_FOLDER_PATH, "light_theme.css"),
}

ICONS_FILE_PATHS = {
    THEME_DARK: os.path.join(ICONS_FOLDER_PATH, "theme_icon_dark.png"),
    THEME_LIGHT: os.path.join(ICONS_FOLDER_PATH, "theme_icon_light.png"),
    THEME_SYSTEM_DEFAULT
    + "_"
    + THEME_DARK: os.path.join(ICONS_FOLDER_PATH, "theme_icon_system_default_dark.png"),
    THEME_SYSTEM_DEFAULT
    + "_"
    + THEME_LIGHT: os.path.join(
        ICONS_FOLDER_PATH, "theme_icon_system_default_light.png"
    ),
}
