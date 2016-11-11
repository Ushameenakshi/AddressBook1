#include <QApplication>
#include <QtSql>
#include <QtGui>
#include <QTableView>
#include <QWidget>
#include <QTableWidget>
#include <QMessageBox>
#include "testdeclaration.h"
int main(int argc, char *argv[])
{
QApplication app(argc, argv);
testdeclaration *t = new testdeclaration();
t->test();
return app.exec();
}

