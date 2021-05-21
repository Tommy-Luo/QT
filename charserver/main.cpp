#include "widget.h"
#include "loginserver.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    createsqlite();
    loginserver logindlg;
    if(logindlg.exec() == QDialog::Accepted)
    {
        Widget w;
        w.show();
        return a.exec();
    }else {

        return 0;
}
}
