#ifndef TOOLBARBUTTON_H
#define TOOLBARBUTTON_H

#include "../command//command_interface.h"

#include <QPushButton>

class ToolbarButton : public QPushButton
{
public:
    ToolbarButton(QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent *e) override;
private:
    ICommand* _command;
};

#endif // TOOLBARBUTTON_H
