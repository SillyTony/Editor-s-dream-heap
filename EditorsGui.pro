#-------------------------------------------------
#
# Project created by QtCreator 2015-03-11T21:00:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EditorsGui
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    heapnode.cpp

HEADERS  += mainwindow.h \
    heapnode.h \
    heap.h

FORMS    += mainwindow.ui
