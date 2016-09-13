#-------------------------------------------------
#
# Project created by QtCreator 2012-01-15T16:53:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

include(../Box2D/box2d.pri)
include(../qb2draw.pri)

TARGET = QB2DrawExample
TEMPLATE = app

SOURCES += main.cpp\
    physicsscene.cpp \
    graphicsviewwindow.cpp

HEADERS  += \
    physicsscene.h \
    graphicsviewwindow.h

FORMS    += \
    graphicsviewwindow.ui

