#ifndef RECONFIGURATION_STRATEGY_H
#define RECONFIGURATION_STRATEGY_H

#include "../command/macro_command.h"

class ReconfigurationStrategy
{
public:
    virtual ~ReconfigurationStrategy() {}
    virtual void reconfigure(MacroCommand *command);
protected:
    ReconfigurationStrategy() {}
}


#endif // RECONFIGURATION_STRATEGY_H
