QT += core
QT -= gui

CONFIG += c++11

TARGET = untitled4
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    b1.cpp \
    b2.cpp \
    baseclass.cpp

HEADERS += \
    b1.h \
    b2.h \
    baseclass.h
