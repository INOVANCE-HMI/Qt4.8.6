TARGET = qsqlmysql

SOURCES = main.cpp
include(../../../sql/drivers/mysql/qsql_mysql.pri)

include(../qsqldriverbase.pri)

INCLUDEPATH += C:\Qt\mysql\build\include
INCLUDEPATH += C:\Qt\mysql\include


CONFIG(debug, debug|release) {
    LIBS += -LC:\Qt\mysql\build\libmysql\Debug -lmysqlclient
} else {
    LIBS += -LC:\Qt\mysql\build\libmysql\Release -lmysqlclient
}
