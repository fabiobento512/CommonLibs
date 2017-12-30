INCLUDEPATH+=$$PWD
DEPENDPATH+=$$PWD
#include($$PWD/CommonLibs.pro)

HEADERS  += \
    $$PWD/pugixml/pugiconfig.hpp \
    $$PWD/cpp17optional/optional.hpp \
    $$PWD/plog/Log.h \
    $$PWD/pugixml/pugixml.hpp \
	$$PWD/ConditionalSemaphore/conditionalsemaphore.h

SOURCES += \
    $$PWD/pugixml/pugixml.cpp  \
	$$PWD/ConditionalSemaphore/conditionalsemaphore.cpp

contains(QT, gui){
SOURCES += \
    $$PWD/jsonhighlighter/highlighter.cpp \
	$$PWD/BasicXMLSyntaxHighlighter/BasicXMLSyntaxHighlighter.cpp \
    $$PWD/CustomTreeWidget/customtreewidget.cpp \
	$$PWD/LineNumberDisplay/LineNumberDisplay.cpp
}

contains(QT, gui){
HEADERS  += \
    $$PWD/jsonhighlighter/highlighter.h  \
	$$PWD/BasicXMLSyntaxHighlighter/BasicXMLSyntaxHighlighter.h \
    $$PWD/CustomTreeWidget/customtreewidget.h \
	$$PWD/LineNumberDisplay/LineNumberDisplay.h
}

# Extra libs
quazip {
	LIBS += -L$$PWD/zlib-1.2.8 -lz

	win32 {
	LIBS += -L$$PWD/quazip-0.7.2/quazip/release -lquazip
	}

	macx {
	LIBS += -L$$PWD/quazip-0.7.2/quazip -lquazip
	}
	
	INCLUDEPATH += $$PWD/zlib-1.2.8 \
	$$PWD/quazip-0.7.2/quazip
}

contains(QT, gui){
INCLUDEPATH += \
    $$PWD/CustomTreeWidget # this one is global so we can use it to promote widgets in qt creator
}
# (http://stackoverflow.com/questions/18471827/qtcreator-cant-find-the-class-header-file-after-promoting-a-widget-to-that-clas)
# $$PWD/pugixml
