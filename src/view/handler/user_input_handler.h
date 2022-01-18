#ifndef USER_INPUT_HANDLER_H
#define USER_INPUT_HANDLER_H

#include <cassert>
#include <QInputEvent>

template<typename E>
class UserInputHandler
{
public:
    virtual ~UserInputHandler() {}
    virtual void handle(E event) = 0;
protected:
    UserInputHandler() {}
};

#endif // USER_INPUT_HANDLER_H
