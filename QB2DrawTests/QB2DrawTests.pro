#-------------------------------------------------
#
# Project created by QtCreator 2016-09-13T21:15:46
#
#-------------------------------------------------

QT       += testlib gui

include(../Box2D/box2d.pri)
include(../qb2draw.pri)

TARGET = tst_qb2draw
CONFIG   += console c++11
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += tst_qb2draw.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"
