#include "macro_command.h"
#include "command_interface.h"

MacroCommand::MacroCommand()
    : ICommand()
{
    _commands = new std::vector<ICommand*>(0);
}

void MacroCommand::execute()
{
    for(auto it = _commands->begin(); it != _commands->end(); it++) {
        (*it)->execute();
    }
}

void MacroCommand::appendCommand(ICommand *command)
{
    _commands->push_back(command);
}

void MacroCommand::insertCommand(int index, ICommand *command)
{
    _commands->insert(_commands->begin() + index, command);
}

void MacroCommand::removeCommand(ICommand *command)
{
    for(auto it = _commands->begin(); it != _commands->end(); it++) {
        if((*it) == command) {
            _commands->erase(it);
            return;
        }
    }
}
