#-------------------------------------------------
#
# Project created by QtCreator 2014-08-12T22:44:56
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += webkit

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = looplorer
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    locationbar.cpp

HEADERS  += widget.h \
    locationbar.h

FORMS    += widget.ui \
    locationbar.ui \
    bookmarks/bookmarksdialog.ui \
    bookmarks/addbookmarkdialog.ui

RESOURCES += \
    rc.qrc
