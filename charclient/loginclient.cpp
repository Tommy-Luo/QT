#include "loginclient.h"
#include "ui_loginclient.h"

loginclient::loginclient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginclient)
{
    ui->setupUi(this);
}

loginclient::~loginclient()
{
    delete ui;
}

void loginclient::on_loginbtn_clicked()
{
    if(!ui->pwdlineEdit->text().isEmpty()){
        QSqlQuery query;
        QString user,pwd;
        user=ui->userlineEdit->text();
        pwd=ui->pwdlineEdit->text();
        QString s = QString("select * from user where username='%1' and password='%2'").arg(user).arg(pwd);
        query.exec(s) ;
        if( query.exec(s)&&query.next()){
            QDialog::accept();
        }else {
        QMessageBox::warning(this,tr("用户名或密码错误"),tr("错误"),QMessageBox::Ok);
        ui->pwdlineEdit->clear();
        ui->pwdlineEdit->setFocus();
}

    }

}



void loginclient::on_quitbtn_clicked()
{
    this->close();
}

void loginclient::on_signpushButton_clicked()
{
    signdlg = new signclient(this);
    signdlg->show();
}
