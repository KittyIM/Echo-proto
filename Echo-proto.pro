TARGET     = Echo-proto
TEMPLATE   = lib

HEADERS += \
    SDK/SoundsConstants.h \
    SDK/SettingPage.h \
    SDK/Protocol.h \
    SDK/PluginCore.h \
    SDK/Plugin.h \
    SDK/Message.h \
    SDK/GGConstants.h \
    SDK/Contact.h \
    SDK/constants.h \
    SDK/Chat.h \
    SDK/Account.h \
    EchoProtocol.h \
    EchoAccount.h \
    EchoContact.h \
    EchoEditWindow.h

SOURCES += \
    EchoProtocol.cpp \
    EchoAccount.cpp \
    EchoContact.cpp \
    EchoEditWindow.cpp

FORMS += \
    EchoEditWindow.ui










