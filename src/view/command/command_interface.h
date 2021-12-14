#ifndef COMMAND_INTERFACE_H
#define COMMAND_INTERFACE_H

/*
 *  This interface provides a protocol about widgets reacting to user's action. The
 * protocol requires the widgets to handle user's action via Command Interface. To
 * accomplish the protocol, they have one or more objects of classes implementing
 * this interface as its own private member variables and call execute() method of
 * those objects when they perceive that a action has been invoked.
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
