TEMPLATE = lib
CONFIG += qt plugin
QT += qml

DISTFILES += \
    qmldir

HEADERS += \
    plugin.h \
    laugh.h

SOURCES += \
    plugin.cpp \
    laugh.cpp
