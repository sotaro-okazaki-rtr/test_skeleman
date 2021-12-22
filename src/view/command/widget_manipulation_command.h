#ifndef WIDGETMANIPULATIONCOMMAND_H
#define WIDGETMANIPULATIONCOMMAND_H

#include "command_interface.h"

#include <QWidget>

class WidgetManipulationCommand : public ICommand
{
protected:
    WidgetManipulationCommand(QWidget *widget);
    QWidget *_widget;
};

#endif // WIDGETMANIPULATIONCOMMAND_H
