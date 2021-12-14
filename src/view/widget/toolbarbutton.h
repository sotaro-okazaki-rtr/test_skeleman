#ifndef TOOLBARBUTTON_H
#define TOOLBARBUTTON_H

#include "../command//command_interface.h"

#include <QPushButton>

class ToolbarButton : public QPushButton
{
public:
    ToolbarButton(QWidget *parent = nullptr);
    void setMouseLeftButtonCommand(ICommand *command);
    void setMouseRightButtonCommand(ICommand *command);
    void setMouseMiddleButtonCommand(ICommand *command);
    void mousePressEvent(QMouseEvent *e) override;
private:
    ICommand* _mouseLeftButtonCommand = nullptr;
    ICommand* _mouseRightButtonCommand = nullptr;
    ICommand* _mouseMiddleButtonCommand = nullptr;
};

#endif // TOOLBARBUTTON_H
