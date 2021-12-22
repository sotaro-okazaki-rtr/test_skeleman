#include "toolbarbutton.h"

#include <QDebug>
#include <QMouseEvent>

ToolbarButton::ToolbarButton(QWidget *parent)
    : QPushButton(parent)
{
    this->setText("hello");
    this->setGeometry(100, 100, 1000, 1000);
}

void ToolbarButton::mousePressEvent(QMouseEvent *e)
{
    this->publish();
    /*
    if(e->button() == Qt::LeftButton) {
        if(_mouseLeftButtonCommand != nullptr) {
            _mouseLeftButtonCommand->execute();
        }
    } else if(e->button() == Qt::RightButton) {
        if(_mouseRightButtonCommand != nullptr) {
            _mouseRightButtonCommand->execute();
        }
    } else {
        if(_mouseMiddleButtonCommand != nullptr) {
            _mouseMiddleButtonCommand->execute();
        }
    }
    */
}
