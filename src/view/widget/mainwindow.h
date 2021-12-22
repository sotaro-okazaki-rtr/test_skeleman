#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

class MainWindow : public QWidget
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    void setMenuBar(QWidget *menuBar) {}
    void setToolBar(QWidget *toolBar) {}
    void setContentWidget(QWidget *contentWidget) {}
    void mouseMoveEvent(QMouseEvent *event) override;
};

#endif // MAINWINDOW_H
