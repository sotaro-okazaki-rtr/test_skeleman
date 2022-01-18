#include "command_content_updater.h"

template<typename E>
CommandContentUpdater<E>::CommandContentUpdater()
{

}

template<typename E>
void CommandContentUpdater<E>::handleAdditionally(E event)
{
    for(auto it = _updatableCommands->begin(); it != _updatableCommands->end(); it++) {
        (*it)->update(event);
    }
}


