#-------------------------------------------------
#
# Project created by QtCreator 2016-05-29T13:46:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VigiLost_server
TEMPLATE = app


SOURCES += main.cpp\
    objfound.cpp \
    itemcreator.cpp \
    objfoundform.cpp \
    pass.cpp \
    about.cpp

HEADERS  += itemcreator.h \
    objfound.h \
    objfoundform.h \
    files.h \
    pass.h \
    about.h

FORMS    += itemcreator.ui \
    objfound.ui \
    objfoundform.ui \
    pass.ui \
    about.ui

RC_FILE = resources.rc
QMAKE_LFLAGS += /MANIFESTUAC:\"level=\'requireAdministrator\' uiAccess=\'false\'\"
