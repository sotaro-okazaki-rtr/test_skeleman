#include "position_alteration_command.h"

PositionAlterationCommand::PositionAlterationCommand(QWidget *widget)
    : WidgetManipulationCommand(widget)
{
    _posX = widget->pos().x();
    _posY = widget->pos().y();
}

void PositionAlterationCommand::execute()
{
    int width = _widget->width();
    int height = _widget->height();
    _widget->setGeometry(_posX, _posY, width, height);
}

void PositionAlterationCommand::update(QMouseEvent event)
{
    _posX = event.pos().x();
    _posY = event.pos().y();
}
