#ifndef VIEW_EVENT_SUBSCRIBER_H
#define VIEW_EVENT_SUBSCRIBER_H

class ViewEventSubscriber
{
public:
    virtual ~ViewEventSubscriber() {}
    virtual void handleEvnet() = 0;
protected:
    ViewEventSubscriber() {}
};

#endif // VIEW_EVENT_SUBSCRIBER_H
