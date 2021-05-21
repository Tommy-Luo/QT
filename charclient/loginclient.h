#ifndef LOGINCLIENT_H
#define LOGINCLIENT_H

#include <QDialog>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include <QCryptographicHash>
#include "signclient.h"
namespace Ui {
class loginclient;
}

class loginclient : public QDialog
{
    Q_OBJECT

public:
    explicit loginclient(QWidget *parent = nullptr);
    ~loginclient();
    signclient *signdlg;

private slots:
    void on_loginbtn_clicked();

    void on_quitbtn_clicked();



    void on_signpushButton_clicked();

private:
    Ui::loginclient *ui;
};

#endif // LOGINCLIENT_H
