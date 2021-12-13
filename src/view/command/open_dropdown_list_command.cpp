#include "open_dropdown_list_command.h"
#include "command_interface.h"

#include <QDebug>

OpenDropdownListCommand::OpenDropdownListCommand()
    : ICommand()
{

}

void OpenDropdownListCommand::execute()
{
    qDebug() << "OpenDropdownListCommand is executed.";
}
