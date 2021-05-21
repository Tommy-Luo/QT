#include "signclient.h"
#include "ui_signclient.h"

signclient::signclient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signclient)
{
    ui->setupUi(this);
}

signclient::~signclient()
{
    delete ui;
}

void signclient::on_pushButton_clicked()
{
        QSqlQuery sql_query;
      sql_query.prepare("insert into user values(?,?)");
        sql_query.bindValue(0,ui->signusernamelineEdit->text());
        sql_query.bindValue(1,ui->signpasswordlineEdit->text());


        if(!sql_query.exec()){
            qDebug()<<"Error: Fail to insert data."<<sql_query.lastError();
        }
        else{
            qDebug()<<"insert data success!";
        }

}

void signclient::on_pushButton_2_clicked()
{
    this->close();
}
