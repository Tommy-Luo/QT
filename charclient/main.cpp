#include "widget.h"
#include "loginclient.h"
#include <QApplication>
#include <QProcess>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    createsqlite();
    loginclient logindlg;
    if(logindlg.exec() == QDialog::Accepted)
    {
        Widget w;
        w.show();
        return a.exec();
    }else {

        return 0;
}

}
