#-------------------------------------------------
#
# Project created by QtCreator 2016-11-01T21:45:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += qt

TARGET = QtGame
TEMPLATE = app


SOURCES += main.cpp \
    bullets.cpp \
    enemy.cpp \
    game.cpp \
    score.cpp \
    player.cpp

HEADERS  += \
    bullets.h \
    enemy.h \
    game.h \
    score.h \
    player.h
