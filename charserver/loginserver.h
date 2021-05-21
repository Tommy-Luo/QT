#ifndef LOGINSERVER_H
#define LOGINSERVER_H

#include <QDialog>
#include <QSqlQuery>
#include <QMessageBox>
namespace Ui {
class loginserver;
}

class loginserver : public QDialog
{
    Q_OBJECT

public:
    explicit loginserver(QWidget *parent = nullptr);
    ~loginserver();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::loginserver *ui;
};

#endif // LOGINSERVER_H
