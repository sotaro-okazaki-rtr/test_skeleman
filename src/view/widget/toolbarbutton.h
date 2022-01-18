#ifndef TOOLBARBUTTON_H
#define TOOLBARBUTTON_H

#include "../pub_sub/view_event_publisher.h"
#include "../pub_sub/view_event_subscriber.h"

#include <vector>
#include <QPushButton>
#include <QObject>

class ToolbarButton : public QPushButton
{

public:
    ToolbarButton(QWidget *parent = nullptr);
    ~ToolbarButton() {}
    void mousePressEvent(QMouseEvent *e) override;
private:
    std::vector<ViewEventSubscriber*> subscribers;
};

#endif // TOOLBARBUTTON_H
