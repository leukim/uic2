#-------------------------------------------------
#
# Project created by QtCreator 2014-01-11T18:15:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LifeLogger-desktop
TEMPLATE = app


SOURCES += main.cpp \
    mainwindow.cpp \
    loginwindow.cpp \
    saveddialog.cpp

HEADERS  += \
    mainwindow.h \
    loginwindow.h \
    saveddialog.h

FORMS    += mainwindow.ui \
    loginwindow.ui \
    saveddialog.ui
