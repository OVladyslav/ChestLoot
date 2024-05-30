QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    fireweaponwrapper.cpp \
    honingweaponwrapper.cpp \
    logger.cpp \
    loot.cpp \
    main.cpp \
    mainwindow.cpp \
    maul.cpp \
    poisonweaponwrapper.cpp \
    slayerweaponwrapper.cpp \
    spear.cpp \
    sword.cpp \
    weapon.cpp \
    weapongenerator.cpp \
    weaponwrapper.cpp

HEADERS += \
    fireweaponwrapper.h \
    honingweaponwrapper.h \
    logger.h \
    loot.h \
    loot_system.h \
    mainwindow.h \
    maul.h \
    poisonweaponwrapper.h \
    slayerweaponwrapper.h \
    spear.h \
    sword.h \
    weapon.h \
    weapongenerator.h \
    weaponwrapper.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
