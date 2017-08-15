INCLUDEPATH+=$$PWD
DEPENDPATH+=$$PWD
#include($$PWD/CommonLibs.pro)

SOURCES += \
    $$PWD/pugixml/pugixml.cpp \
    $$PWD/jsonhighlighter/highlighter.cpp \
    $$PWD/CustomTreeWidget/customtreewidget.cpp

HEADERS  += \
    $$PWD/pugixml/pugiconfig.hpp \
    $$PWD/jsonhighlighter/highlighter.h \
    $$PWD/cpp17optional/optional.hpp \
    $$PWD/plog/Log.h \
    $$PWD/pugixml/pugixml.hpp \
    $$PWD/CustomTreeWidget/customtreewidget.h

INCLUDEPATH += $$PWD/CustomTreeWidget # this one is global so we can use it to promote widgets in qt creator
# (http://stackoverflow.com/questions/18471827/qtcreator-cant-find-the-class-header-file-after-promoting-a-widget-to-that-clas)
# $$PWD/pugixml
