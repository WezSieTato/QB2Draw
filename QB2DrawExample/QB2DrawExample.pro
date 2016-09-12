#-------------------------------------------------
#
# Project created by QtCreator 2012-01-15T16:53:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

include(Box2D/box2d.pri)

TARGET = QB2DrawExample
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ../qb2draw.cpp

HEADERS  += mainwindow.h \
    ../qb2draw.h

FORMS    +=

