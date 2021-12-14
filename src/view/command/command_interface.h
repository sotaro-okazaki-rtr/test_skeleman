#ifndef COMMAND_INTERFACE_H
#define COMMAND_INTERFACE_H

/*
 *  ICommand provides a protocol about the way widgets reacting to user's action.
 * The protocol requires the widgets to handle user's action via execute() method of
 * ICommand. To accomplish the protocol, they have one or more objects of Command classes,
 * which implement this interface, as its own private member variables and call execute()
 * method of those objects when they perceive that an action has been invoked.
 *  The reason that the application adopts this interface is that ICommand
 * plays a great role in reducing the knowladge that the widgets use to handle
 * an action invoked by user. Even if the widgets have to notify another part of
 * the application that an action has occured, it is not necessary for them to know
 * the destination of the notification. Instead, they are required only to make sure to
 * use execute() method of ICommand because the objects that implement ICommand perform
 * the detailed transaction, including emitting the action. As stated above, loosing
 * coupling of the widgets and the transaction for user's input makes it easier to
 * introduce an additional transaction.
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
