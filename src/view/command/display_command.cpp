#include "display_command.h"

#include <QWidget>

DisplayCommand::DisplayCommand(QWidget *widget)
    : WidgetManipulationCommand(widget)
{

}

void DisplayCommand::execute()
{
    _widget->show();
}
