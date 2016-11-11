#ifndef TESTDECLARATION_H
#define TESTDECLARATION_H
#include <QtGui>
#include <QtSql>
#include <QTableView>
#include <QTableWidget>
#include <QMessageBox>
#include <QWidget>

class testdeclaration
{
public:
    QTableWidget* table;
    QSqlDatabase db;
    void test();
};

#endif // TESTDECLARATION_H
