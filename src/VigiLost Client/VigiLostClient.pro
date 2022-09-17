#-------------------------------------------------
#
# Project created by QtCreator 2016-05-29T13:46:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VigiLost_client
TEMPLATE = app


SOURCES += main.cpp\
    itemcreator.cpp \
    about.cpp

HEADERS  += itemcreator.h \
    files.h \
    about.h

FORMS    += itemcreator.ui \
    about.ui

RC_FILE = resources.rc
