#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class tcpserver; }
QT_END_NAMESPACE

class tcpserver : public QDialog
{
    Q_OBJECT

public:
    tcpserver(QWidget *parent = nullptr);
    ~tcpserver();

private:
    Ui::tcpserver *ui;
};
#endif // TCPSERVER_H
