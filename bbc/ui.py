from functools import partial

import qdarktheme
from enums.matrix_enums import Matrices
from enums.module_enums import PushButtons
from enums.q_enums import ModuleType
from enums.ui_enums import UIs
from handlers.events_handler import EventsHandler
from handlers.module_handler import ModuleHandler
from handlers.signal_handler import SignalHandler
from handlers.ui_handler import UIHandler
from PySide6.QtGui import QIcon
from PySide6.QtWidgets import QMainWindow


class UI(QMainWindow):
    """A class to handle the UI."""

    def __init__(self) -> None:
        """Initialize the MainUI."""
        super().__init__()
        qdarktheme.setup_theme("auto")

        self._main_module_0, self._main_module_1 = (
            ModuleHandler(Matrices.MainMatrix0),
            ModuleHandler(Matrices.MainMatrix1),
        )

        self._signal_handler, self._ui_handler, self._events_handler = (
            SignalHandler(),
            UIHandler(),
            EventsHandler(),
        )

        self.setup_ui()

    def setup_ui(self) -> None:
        """Setup the UIs."""
        main_ui_info = UIs.MainUI.value

        self.setWindowTitle(main_ui_info["title"])

        self.setWindowIcon(QIcon(main_ui_info["icon"]))

        self._ui_handler.center_ui_on_screen_handler(self)

        self._ui_handler.set_ui_size(self, main_ui_info["initial_size"])

        self._events_handler.quit_on_key_press_event(self)

        self._main_modules_stack = ModuleType.StackedWidget.value(self)
        self._main_modules_stack.addWidget(self._main_module_0)
        self._main_modules_stack.addWidget(self._main_module_1)

        self.setCentralWidget(self._main_modules_stack)
        self.setContentsMargins(*main_ui_info["margins"])

        if main_ui_info["initial_visibility"]:
            self.show()
        else:
            self.hide()

        self.setup_connections()

    def setup_connections(self) -> None:
        """Setup the connections."""
        self._main_module_0.module_connection(
            PushButtons.AutoFrameCAD,
            partial(
                self._ui_handler.switch_modules,
                module=self._main_modules_stack,
            ),
        )
        self._main_module_1.module_connection(
            PushButtons.StartupPage,
            partial(
                self._ui_handler.switch_modules,
                module=self._main_modules_stack,
            ),
        )
