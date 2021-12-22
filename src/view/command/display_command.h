#ifndef DISPLAYCOMMAND_H
#define DISPLAYCOMMAND_H

#include "widget_manipulation_command.h"

class DisplayCommand : public WidgetManipulationCommand
{
public:
    DisplayCommand(QWidget *widget);
    void execute() override;
};

#endif // DISPLAYCOMMAND_H
