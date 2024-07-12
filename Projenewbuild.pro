QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arsenals.cpp \
    dialog.cpp \
    dialogformap.cpp \
    main.cpp \
    mainwindow.cpp \
    map.cpp \
    menu.cpp \
    shopping.cpp \
    sign.cpp \
    user.cpp

HEADERS += \
    arsenals.h \
    dialog.h \
    dialogformap.h \
    mainwindow.h \
    map.h \
    menu.h \
    shopping.h \
    sign.h \
    user.h

FORMS += \
    dialog.ui \
    dialogformap.ui \
    mainwindow.ui \
    map.ui \
    menu.ui \
    shopping.ui \
    sign.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resorce.qrc
