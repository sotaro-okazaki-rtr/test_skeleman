QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/main.cpp \
    src/view/command/display_command.cpp \
    src/view/command/geometry_alteration_command.cpp \
    src/view/command/macro_command.cpp \
    src/view/command/resize_command.cpp \
    src/view/command/widget_manipulation_command.cpp \
    src/view/view_director.cpp \
    src/view/widget/mainwindow.cpp \
    src/view/widget/toolbarbutton.cpp

HEADERS += \
    src/view/command/command_interface.h \
    src/view/command/display_command.h \
    src/view/command/geometry_alteration_command.h \
    src/view/command/macro_command.h \
    src/view/command/resize_command.h \
    src/view/command/widget_manipulation_command.h \
    src/view/pub_sub/view_event_publisher.h \
    src/view/pub_sub/view_event_subscriber.h \
    src/view/view_director.h \
    src/view/widget/mainwindow.h \
    src/view/widget/toolbarbutton.h

FORMS +=

TRANSLATIONS += \
    test_skeleman_ja_JP.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
