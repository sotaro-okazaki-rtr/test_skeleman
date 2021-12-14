#include "toolbarbutton.h"
#include "../command/open_dropdown_list_command.h"

#include <QDebug>
#include <QMouseEvent>

ToolbarButton::ToolbarButton(QWidget *parent)
    : QPushButton(parent)
{

}

void ToolbarButton::setMouseLeftButtonCommand(ICommand *command)
{
    _mouseLeftButtonCommand = command;
}

void ToolbarButton::setMouseRightButtonCommand(ICommand *command)
{
    _mouseRightButtonCommand = command;
}

void ToolbarButton::setMouseMiddleButtonCommand(ICommand *command)
{
    _mouseMiddleButtonCommand = command;
}

void ToolbarButton::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton) {
        if(_mouseLeftButtonCommand != nullptr) {
            _mouseLeftButtonCommand->execute();
        }
    } else if(e->button() == Qt::RightButton) {
        qDebug() << "yaa";
        if(_mouseRightButtonCommand != nullptr) {
            _mouseRightButtonCommand->execute();
        }
    } else {
        if(_mouseMiddleButtonCommand != nullptr) {
            _mouseMiddleButtonCommand->execute();
        }
    }
}
