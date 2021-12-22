#include "display_command.h"

DisplayCommand::WidgetDisplayCommand(QWidget *widget)
    : WidgetManipulationCommand(widget)
{

}

void DisplayCommand::execute()
{
    _widget->show();
}
