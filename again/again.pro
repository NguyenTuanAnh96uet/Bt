QT += core
QT -= gui

CONFIG += c++11

TARGET = again
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    baseclass.cpp \
    b1.cpp \
    b2.cpp \
    b3.cpp \
    b4.cpp \
    b5.cpp \
    b6.cpp \
    b7.cpp

HEADERS += \
    baseclass.h \
    b1.h \
    b2.h \
    b3.h \
    b4.h \
    b5.h \
    b6.h \
    b7.h
