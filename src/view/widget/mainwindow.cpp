#include "mainwindow.h"
#include "toolbarbutton.h"
#include "../command/open_dropdown_list_command.h"

#include <QDebug>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent) : QWidget(parent)
{
    OpenDropdownListCommand *command = new OpenDropdownListCommand();
    ToolbarButton *button = new ToolbarButton(command, command, command, this);
    button->setGeometry(100, 100, 100, 100);
    this->setMouseTracking(true);
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    qDebug() << event->pos();
}

