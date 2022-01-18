#ifndef POST_DECORATOR_H
#define POST_DECORATOR_H

#include "user_input_handler.h"

template<typename E>
class PostDecorator : public UserInputHandler<E>
{
public:
    PostDecorator(UserInputHandler<E> *handler)
        : UserInputHandler<E>()
        , _handler(handler) {}
    void handle(E event) override final
    {
        _handler->handle(event);
        handleAdditionally(event);
    }
protected:
    virtual void handleAdditionally(E event) = 0;
private:
    UserInputHandler<E> *_handler;
}

#endif // POST_DECORATOR_H
