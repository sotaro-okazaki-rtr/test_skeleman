#ifndef GEOMETRYALTERATIONCOMMAND_H
#define GEOMETRYALTERATIONCOMMAND_H

#include "widget_manipulation_command.h"

class GeometryAlterationCommand : public WidgetManipulationCommand
{
public:
    GeometryAlterationCommand(QWidget *widget);
    void execute() override;
private:
    int _posX;
    int _posY;
};

#endif // GEOMETRYALTERATIONCOMMAND_H
