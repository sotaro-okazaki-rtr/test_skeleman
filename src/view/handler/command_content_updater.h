#ifndef COMMANDCONTENTUPDATER_H
#define COMMANDCONTENTUPDATER_H

#include "pre_decorator.h"
#include "updatable_interface.h"

#include <vector>

template<typename E>
class CommandContentUpdater : public PreDecorator<E>
{
public:
    CommandContentUpdater();
    void appendCommand(IUpdatable<E> *command);
    void insertCommand(int index, IUpdatable<E> *command);
    void removeCommand(IUpdatable<E> *command);
protected:
    void handleAdditionally(E event) override;
private:
    std::vector<IUpdatable<E>*> *_updatableCommands;
};

#endif // COMMANDCONTENTUPDATER_H
