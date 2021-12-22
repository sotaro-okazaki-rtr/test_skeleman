#include "geometry_alteration_command.h"

GeometryAlterationCommand::GeometryAlterationCommand(QWidget *widget)
    : WidgetManipulationCommand(widget)
    , _posX(0)
    , _posY(0)
{

}

void GeometryAlterationCommand::execute()
{
    int width = _widget->width();
    int height = _widget->height();
    _widget->setGeometry(_posX, _posY, width, height);
}
