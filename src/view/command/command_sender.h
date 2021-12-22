#ifndef COMMANDSENDER_H
#define COMMANDSENDER_H

#include<QWidget>
#include "command_interface.h"


class CommandSender
{
public:
    CommandSender();
private:
    QWidget *_widget;
    ICommand *_command;

};

#endif // COMMANDSENDER_H
