#ifndef COMMAND_INTERFACE_H
#define COMMAND_INTERFACE_H

/*
 * This interface provides a protocol of communication between a widget of UI and
 * another part of the application. Any action invoked by the widgets should be emitted
 * via this interface. To accomplish the protocol, the widgets that is in charge of
 * notifying the application that an action has occured have one or more objects of
 * classes that implements this interface and has the objects receiving notification
 * as its own private member variables. There are two reasons that the application
 * adopts this interface.
 */

class ICommand
{
public:
    virtual ~ICommand() {}
    virtual void execute() = 0;
protected:
    ICommand() {}
};

#endif // COMMAND_INTERFACE_H
