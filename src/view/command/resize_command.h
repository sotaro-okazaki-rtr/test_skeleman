#ifndef RESIZECOMMAND_H
#define RESIZECOMMAND_H

#include "widget_manipulation_command.h"

class ResizeCommand : public WidgetManipulationCommand
{
public:
    ResizeCommand(QWidget *widget);
    void execute() override;
private:
    int _width;
    int _height;
};

#endif // RESIZECOMMAND_H
