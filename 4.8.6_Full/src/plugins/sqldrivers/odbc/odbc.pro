TARGET = qsqlodbc

SOURCES = main.cpp
include(../../../sql/drivers/odbc/qsql_odbc.pri)

include(../qsqldriverbase.pri)
INCLUDEPATH += /qte/unixodbc/include
LIBS +=-L/qte/unixodbc/lib -lodbc
