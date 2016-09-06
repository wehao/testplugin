TEMPLATE = lib
CONFIG += qt plugin
QT += qml quick

TARGET = $$qtLibraryTarget(testplugin)

DISTFILES += \
    qmldir \
    MyButton.qml

HEADERS += \
    laugh.h \
    plugin_plugin.h \
    myrect.h

SOURCES += \
    laugh.cpp \
    plugin_plugin.cpp \
    myrect.cpp
DESTDIR = /home/wehao/Qtfile/build-testExample-Desktop_Qt_5_6_1_GCC_64bit-Debug/testplugin
temp.files += qmldir
temp.files += MyButton.qml
temp.path = $$DESTDIR
COPIES = temp

