#ifndef PRE_DECORATOR_H
#define PRE_DECORATOR_H

#include "user_input_handler.h"

template<typename E>
class PreDecorator : public UserInputHandler<E>
{
public:
    PreDecorator(UserInputHandler<E> *handler)
        : UserInputHandler<E>()
        , _handler(handler) {}
    void handle(E event) override final
    {
        handleAdditionally(event);
        _handler->handle(event);
    }
protected:
    virtual void handleAdditionally(E event) = 0;
private:
    UserInputHandler<E> *_handler;
};

#endif // PRE_DECORATOR_H
