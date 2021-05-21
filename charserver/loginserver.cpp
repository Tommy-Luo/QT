#include "loginserver.h"
#include "ui_loginserver.h"

loginserver::loginserver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginserver)
{
    ui->setupUi(this);
}

loginserver::~loginserver()
{
    delete ui;
}

void loginserver::on_pushButton_clicked()
{
    if(!ui->pwdlineEdit->text().isEmpty()){
        QSqlQuery query;
        QString user,pwd;
        user=ui->userlineEdit->text();
        pwd=ui->pwdlineEdit->text();
        QString s = QString("select * from manager where username='%1' and password='%2'").arg(user).arg(pwd);
        query.exec(s) ;
        if( query.exec(s)&&query.next()){
            QDialog::accept();
        }else {
        QMessageBox::warning(this,tr("管理员名或密码错误"),tr("错误"),QMessageBox::Ok);
        ui->pwdlineEdit->clear();
        ui->pwdlineEdit->setFocus();
}

    }
}

void loginserver::on_pushButton_2_clicked()
{
    this->close();
}
