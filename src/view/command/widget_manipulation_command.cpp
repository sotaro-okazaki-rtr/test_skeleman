#include "widget_manipulation_command.h"

WidgetManipulationCommand::WidgetManipulationCommand(QWidget *widget)
    : ICommand()
    , _widget(widget)
{

}
