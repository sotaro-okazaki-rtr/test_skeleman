#include "command_sender.h"
#include "user_input_handler.h"

template<typename E>
CommandSender<E>::CommandSender(ICommand *command)
    : UserInputHandler<E>()
    , _command(command)
{

}

template<typename E>
void CommandSender<E>::handle(E event)
{
    _command->execute();
}

