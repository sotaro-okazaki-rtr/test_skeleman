#ifndef COMMANDSENDER_H
#define COMMANDSENDER_H

#include "user_input_handler.h"
#include "../command/command_interface.h"

template<typename E>
class CommandSender : public UserInputHandler<E>
{
public:
    CommandSender(ICommand *command);
    void handle(E event) override;
private:
    ICommand *_command;
};

#endif // COMMANDSENDER_H
