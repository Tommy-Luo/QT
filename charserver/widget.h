#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QTcpServer>
#include <QHostInfo>
#include <QNetworkInterface>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlError>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void    getHostInformaton();
private slots:
    void on_pushButtonSend_clicked();

    void on_pushButtonClose_clicked();

    void on_detailBtn_clicked();

private:
    Ui::Widget *ui;

    QTcpServer *pTcpServer;
    QTcpSocket *pTcpSocket;
};

static bool createsqlite()
{
       QSqlDatabase sqldb = QSqlDatabase::addDatabase("QSQLITE");
       sqldb.setDatabaseName("clientuser.db");
       if(!sqldb.open()){
        QMessageBox::critical(0,QObject::tr("数据库连接失败"),"无法建立链接",QMessageBox::Cancel);
        qDebug() << "Error: Failed to connect database." << sqldb.lastError();
        return false;
       }else {
       qDebug() << "Succeed to connect database." ;
}
       QSqlQuery sql_query;
           if(!sql_query.exec("create table manager(  \
                              username INTEGER NOT NULL PRIMARY KEY,    \
                              password INTEGER NOT NULL)"))
           {
               qDebug() << "Error: Fail to create table."<< sql_query.lastError();
           }
           else
           {
               qDebug() << "Table created!";
           }

                       QString InsertStr = QString("INSERT INTO manager("
                                                    "username, "
                                                    "password) "
                                                    "VALUES("
                                                    "'123', "
                                                    "'123');");
                       sql_query.prepare(InsertStr);
                       if(!sql_query.exec()){
                           qDebug()<<"Error: Fail to insert data."<<sql_query.lastError();
                       }
                       else{
                           qDebug()<<"insert data success!";
                       }


       return  true;
}
#endif // WIDGET_H
