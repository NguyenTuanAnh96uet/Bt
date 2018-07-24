QT += qml quick

CONFIG += c++11

SOURCES += main.cpp \
    bai4.cpp \
    b43.cpp \
    b44.cpp \
    b46.cpp \
    b45.cpp \
    b47.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    bai4.h \
    b43.h \
    b44.h \
    b46.h \
    b45.h \
    b47.h
