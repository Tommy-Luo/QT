#include "dialog.h"
#include "drawer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    drawer drawer1;
    drawer1.show();
//    Dialog w;
//    w.show();
    return a.exec();
}
