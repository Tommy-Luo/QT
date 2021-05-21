#ifndef SIGNCLIENT_H
#define SIGNCLIENT_H



#include <QDialog>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
namespace Ui {
class signclient;
}

class signclient : public QDialog
{
    Q_OBJECT

public:
    explicit signclient(QWidget *parent = nullptr);
    ~signclient();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::signclient *ui;
};

#endif // SIGNCLIENT_H
