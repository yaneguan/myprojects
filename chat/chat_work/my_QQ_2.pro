#-------------------------------------------------
#
# Project created by QtCreator 2020-04-04T12:36:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = my_QQ_2
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp \
    regist.cpp \
    userspace.cpp \
    login.cpp \
    chat_windows.cpp \
    find_psd.cpp

HEADERS += \
        widget.h \
    regist.h \
    userspace.h \
    login.h \
    chat_windows.h \
    find_psd.h

FORMS += \
        widget.ui \
    regist.ui \
    userspace.ui \
    login.ui \
    chat_windows.ui \
    find_psd.ui

RESOURCES += \
    my_qq_icon.qrc \
    usr.qrc
