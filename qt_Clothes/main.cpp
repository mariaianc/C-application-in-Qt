#include "qt_Clothes.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qt_Clothes w;
    w.show();
    return a.exec();
}
