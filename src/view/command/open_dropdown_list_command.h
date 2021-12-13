#ifndef OPENDROPDOWNLISTCOMMAND_H
#define OPENDROPDOWNLISTCOMMAND_H

#include "command_interface.h"

class OpenDropdownListCommand : public ICommand
{
public:
    OpenDropdownListCommand();
    void execute() override;
};

#endif // OPENDROPDOWNLISTCOMMAND_H
