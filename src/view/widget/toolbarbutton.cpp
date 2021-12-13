#include "toolbarbutton.h"
#include "../command/open_dropdown_list_command.h"

#include <QDebug>

ToolbarButton::ToolbarButton(QWidget *parent)
    : QPushButton(parent)
{
    _command = new OpenDropdownListCommand();
}

void ToolbarButton::mousePressEvent(QMouseEvent *e)
{
    _command->execute();
}
