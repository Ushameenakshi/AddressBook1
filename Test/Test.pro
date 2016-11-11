QT += core
QT -= gui
QT += sql widgets
#CONFIG += c++11

TARGET = Test
CONFIG += console
CONFIG -= app_bundle
TEMPLATE = app
SOURCES += main.cpp \
    testdeclaration.cpp

HEADERS += \
    testdeclaration.h
