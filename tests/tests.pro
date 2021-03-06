include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

#QMAKE_CXXFLAGS += -Wall -Wextra
#QMAKE_CFLAGS += -Wall -Wextra

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov

SOURCES += main.cpp \
    ../app/save.cpp \
    ../app/load.cpp \
    ../app/move_next_line_begin.cpp \
    ../app/create_text.cpp \
    ../app/process_forward.cpp \
    ../app/remove_all.cpp \
    ../app/append_line.cpp \
    ../app/m.cpp \
    ../app/mcf.cpp \
    ../app/rh.cpp


HEADERS += \
    ../app/common.h \
    ../app/text.h \
    ../app/_text.h \
    save.h \
    m.h \
    move_next_line_begin.h \
    mcf.h \
    rh.h

INCLUDEPATH += ../app
 
