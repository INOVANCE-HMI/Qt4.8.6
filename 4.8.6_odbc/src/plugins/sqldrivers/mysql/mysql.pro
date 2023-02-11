TARGET = qsqlmysql

SOURCES = main.cpp
include(../../../sql/drivers/mysql/qsql_mysql.pri)

include(../qsqldriverbase.pri)

INCLUDEPATH += /qte/mysql-arm/include
INCLUDEPATH += /qte/mysql-arm/build/include
LIBS += -L/qte/mysql-arm/build/libmysql -lmysqlclient
