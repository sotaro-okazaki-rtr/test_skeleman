#include "resize_command.h"

ResizeCommand::ResizeCommand(QWidget *widget)
    : WidgetManipulationCommand(widget)
    , _width(0)
    , _height(0)
{

}

void ResizeCommand::execute()
{
    _widget->resize(_width, _height);
}

