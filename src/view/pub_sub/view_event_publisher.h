#ifndef VIEW_EVENT_PUBLISHER_H
#define VIEW_EVENT_PUBLISHER_H

#include "view_event_subscriber.h"

class ViewEventPublisher
{
public:
    virtual ~ViewEventPublisher() {}
    virtual void publish() = 0;
    virtual void addSubscriber(ViewEventSubscriber *subscriber) = 0;
    virtual void removeSubscriver(ViewEventSubscriber *subscriber) = 0;
protected:
    ViewEventPublisher() {}
};

#endif // VIEW_EVENT_PUBLISHER_H
