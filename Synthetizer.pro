#-------------------------------------------------
#
# Project created by QtCreator 2014-08-14T01:11:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Synthetizer
TEMPLATE = app


SOURCES += src/main.cpp\
        src/mainwindow.cpp \
    src/horizontallevelbar.cpp \
    src/verticallevelbar.cpp \
    src/splitbankform.cpp \
    src/favoriteform.cpp \
    src/usbform.cpp \
    src/effectsform.cpp \
    src/categoriesform.cpp \
    src/presetbankform.cpp \
    src/displayform.cpp \
    src/systeminfoform.cpp \
    src/mainsystemform.cpp \
    src/multisamplesform.cpp \
    src/soundbankform.cpp \
    src/doublesidedverticalbar.cpp \
    src/frontbuttoneditform.cpp \
    src/soundsplitform.cpp \
    src/piano.cpp \
    src/effectseditform.cpp \
    src/ampsettingsform.cpp \
    src/filtersettingsform.cpp \
    src/pitchsettingsform.cpp \
    src/adsrgraph.cpp \
    src/soundeditform.cpp \
    src/miscsettingsform.cpp \
    src/effectsroutingform.cpp \
    src/sampleeffectlink.cpp \
    src/effecteffectlink.cpp \
    src/mastereffectlink.cpp \
    effectswidget.cpp \
    effectroutinglink.cpp \
    src/gigfile.cpp

HEADERS  += src/mainwindow.h \
    src/horizontallevelbar.h \
    src/verticallevelbar.h \
    src/splitbankform.h \
    src/favoriteform.h \
    src/usbform.h \
    src/effectsform.h \
    src/categoriesform.h \
    src/presetbankform.h \
    src/displayform.h \
    src/systeminfoform.h \
    src/mainsystemform.h \
    src/multisamplesform.h \
    src/soundbankform.h \
    src/doublesidedverticalbar.h \
    src/frontbuttoneditform.h \
    src/soundsplitform.h \
    src/piano.h \
    src/effectseditform.h \
    src/ampsettingsform.h \
    src/filtersettingsform.h \
    src/pitchsettingsform.h \
    src/adsrgraph.h \
    src/soundeditform.h \
    src/miscsettingsform.h \
    src/effectsroutingform.h \
    src/sampleeffectlink.h \
    src/effecteffectlink.h \
    src/mastereffectlink.h \
    effectswidget.h \
    effectroutinglink.h \
    src/gigfile.h

FORMS    += ui/mainwindow.ui \
    ui/splitbankform.ui \
    ui/favoriteform.ui \
    ui/usbform.ui \
    ui/effectsform.ui \
    ui/categoriesform.ui \
    ui/presetbankform.ui \
    ui/displayform.ui \
    ui/systeminfoform.ui \
    ui/mainsystemform.ui \
    ui/multisamplesform.ui \
    ui/soundbankform.ui \
    ui/frontbuttoneditform.ui \
    ui/soundsplitform.ui \
    ui/effectseditform.ui \
    ui/ampsettingsform.ui \
    ui/filtersettingsform.ui \
    ui/pitchsettingsform.ui \
    ui/soundeditform.ui \
    ui/miscsettingsform.ui \
    ui/effectsroutingform.ui \
    effectswidget.ui

INCLUDEPATH += src

RESOURCES += \
    res/res.qrc

unix{
INCLUDEPATH += /usr/include/libgig
LIBS += -L/usr/lib/libgig \
        -lgig
}
CONFIG +=
QMAKE_CXXFLAGS += -std=c++11 -DQT_FATAL_WARNINGS=1
