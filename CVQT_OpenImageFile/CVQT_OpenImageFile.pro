#-------------------------------------------------
#
# Project created by QtCreator 2014-08-29T21:55:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CVQT_OpenImageFile
TEMPLATE = app

INCLUDEPATH += D:/opencv32/build/install/include
LIBS += "D://opencv32//build//install//x64//vc12//lib//*.lib"

SOURCES += main.cpp\
        openimagefile.cpp

HEADERS  += openimagefile.h

FORMS    += openimagefile.ui


static { # everything below takes effect with CONFIG += static
  CONFIG += static
  DEFINES += STATIC
  message("~~~ static build ~~~") # this is for information, that the static build is done
  mac: TARGET = $$join(TARGET,,,_static) #this adds an _static in the end, so you can seperate static build from non static build
  win32: TARGET = $$join(TARGET,,,s) #this adds an s in the end, so you can seperate static build from non static build
}

