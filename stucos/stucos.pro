#-------------------------------------------------
#
# Project created by QtCreator 2022-04-27T20:04:23
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = stucos
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    optionwindow.cpp \
    loginwindow.cpp \
    selectionwindow.cpp \
    logwindow.cpp \
    coursetable.cpp \
    searchwindow.cpp

HEADERS += \
    optionwindow.h \
    loginwindow.h \
    selectionwindow.h \
    logwindow.h \
    coursetable.h \
    searchwindow.h \
    mysql.h

FORMS += \
    optionwindow.ui \
    loginwindow.ui \
    selectionwindow.ui \
    logwindow.ui \
    coursetable.ui \
    searchwindow.ui

RESOURCES += \
    resourse_file.qrc
