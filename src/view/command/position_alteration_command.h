#ifndef POSITIONALTERATIONCOMMAND_H
#define POSITIONALTERATIONCOMMAND_H

#include "widget_manipulation_command.h"
#include "../handler/updatable_interface.h"

#include <QMouseEvent>

class PositionAlterationCommand : public WidgetManipulationCommand
    , public IUpdatable<QMouseEvent>
{
public:
    PositionAlterationCommand(QWidget *widget);
    // WidgetManipulationCommand's method override
    void execute() override;
    // IUpdatable's method override
    void update(QMouseEvent event) override;
private:
    int _posX;
    int _posY;
};

#endif // POSITIONALTERATIONCOMMAND_H
