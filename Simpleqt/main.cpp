#include <QApplication>
#include <QtWidgets>


int main(int argc, char *argv[])
{

    QApplication app(argc, argv);
    QWidget window;
    window.setFixedSize(300,200);
    QPushButton *welButton = new QPushButton("Welcome to Qt",&window);
    welButton->setToolTip("Tool Tip to welcome Button");
    welButton->setGeometry(10,10,100,30);
    window.show();
    return app.exec();
}
