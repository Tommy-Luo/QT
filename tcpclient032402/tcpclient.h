#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class tcpclient; }
QT_END_NAMESPACE

class tcpclient : public QDialog
{
    Q_OBJECT

public:
    tcpclient(QWidget *parent = nullptr);
    ~tcpclient();

private:
    Ui::tcpclient *ui;
};
#endif // TCPCLIENT_H
