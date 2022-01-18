#ifndef COMMANDRECONFIGURATOR_H
#define COMMANDRECONFIGURATOR_H

#include "pre_decorator.h"
#include "../command/macro_command.h"

template<typename E>
class CommandReconfigurator : public PreDecorator<E>
{
public:
    CommandReconfigurator();
protected:
    void handleAdditionally(E event) override;
private:
    MacroCommand *_command;
};

#endif // COMMANDRECONFIGURATOR_H
