#include "mainwindow.h"
#include "toolbarbutton.h"

#include <QDebug>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent) : QWidget(parent)
{
    ToolbarButton *button = new ToolbarButton(this);
    button->setGeometry(100, 100, 100, 100);
    this->setMouseTracking(true);
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    qDebug() << event->pos();
}

