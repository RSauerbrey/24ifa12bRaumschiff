TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        avatar.cpp \
        main.cpp \
        mediziner.cpp \
        raumschiff.cpp \
        rettungskapsel.cpp \
        techniker.cpp

HEADERS += \
    avatar.h \
    mediziner.h \
    raumschiff.h \
    rettungskapsel.h \
    techniker.h
