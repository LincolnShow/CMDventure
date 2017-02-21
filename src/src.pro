TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    attributes.cpp \
    item.cpp \
    lootable.cpp

HEADERS += \
    livingcreature.h \
    attributes.h \
    specialeffect.h \
    item.h \
    levelable.h \
    lootable.h
