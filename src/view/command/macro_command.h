#ifndef MACROCOMMAND_H
#define MACROCOMMAND_H

#include "command_interface.h"

#include <vector>

class MacroCommand : public ICommand
{
public:
    MacroCommand();
    void execute() override;
    void appendCommand(ICommand *command);
    void insertCommand(int index, ICommand *command);
    void removeCommand(ICommand *command);
private:
    std::vector<ICommand*> *_commands;
};

#endif // MACROCOMMAND_H
