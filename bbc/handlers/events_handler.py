from functools import partial

from enums.q_enums import AspectRatioModeTypes
from handlers.dialog_handler import DialogHandler
from PySide6.QtGui import QKeySequence, QShortcut
from PySide6.QtWidgets import QGraphicsScene, QGraphicsView, QWidget


class EventsHandler:
    """A class to handle events."""

    @staticmethod
    def quit_on_key_press_event(ui: QWidget, quit_application: bool = True) -> None:
        """Quit on Escape key or Ctrl+Q."""
        shortcuts = ["Escape", "Ctrl+Q"]
        for shortcut_str in shortcuts:
            shortcut = QShortcut(QKeySequence(shortcut_str), ui)
            shortcut.activated.connect(
                partial(DialogHandler.quit_dialog, quit_application)
            )

    @staticmethod
    def fit_scene_in_view(instance: QGraphicsView) -> None:
        """Fits the scene in the view."""
        instance.fitInView(
            instance.sceneRect(), AspectRatioModeTypes.KeepAspectRatio.value
        )
