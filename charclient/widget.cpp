#include "widget.h"
#include "ui_widget.h"

#include <QHostAddress>
#include <QPushButton>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("TcpClient");

    pTcpSocket = NULL;

    //分配空间，指定父对象
    pTcpSocket = new QTcpSocket(this);

    //弹出来一个提示而已
    connect(pTcpSocket, &QTcpSocket::connected,
            [=]()


           {

               ui->textEditRead->setText("The connection server is successful.");
           }



           );

    //显示来自服务器的消息
    connect(pTcpSocket, &QTcpSocket::readyRead,[=]()
           {
               //从通信套接字中间取出内容
               QByteArray array = pTcpSocket->readAll();
               //QString temp2 = QString("");
               ui->textEditRead->append("[Server:]" + array); //在后面追加新的消息
           }
           );


    connect(ui->pushButton_2, &QPushButton::pressed,
           [=]()
           {
              QString str = "[Client:]" + ui->textEditWrite->toPlainText();
              ui->textEditRead->append(str); //在后面追加新的消息
           }
           );



}

Widget::~Widget()
{
    delete ui;
}


//与服务器建立连接
void Widget::on_pushButton_clicked()
{
    //获得服务器的IP和端口
    QString ip = ui->lineEdit->text();
    qint16 port = ui->lineEdit_2->text().toInt();

    //主动和服务器将建立连接
    pTcpSocket->connectToHost(QHostAddress(ip), port);
}


//给服务器发送消息
void Widget::on_pushButton_2_clicked()
{
    //获取编辑区域的内容
    QString str = ui->textEditWrite->toPlainText();
    //给对方发送消息,当有中文的时候就是用使用utf8
    pTcpSocket->write(str.toUtf8().data());
}


//断开连接
void Widget::on_pushButton_3_clicked()
{
    pTcpSocket->disconnectFromHost();
}

void Widget::on_detailBtn_clicked()
{
       getHostInformaton();
}

void Widget::getHostInformaton()
{
    QString detail="";
    QList<QNetworkInterface> list = QNetworkInterface::allInterfaces();

    for (int i = 0;i<list.count();i++) {
        QNetworkInterface interface = list.at(i);
        detail = detail+tr("设备:")+interface.name()+"\n";
        detail = detail+tr("硬件地址:")+interface.hardwareAddress()+"\n";
        QList<QNetworkAddressEntry>entryList = interface.addressEntries();

        for (int j = 1;j < entryList.count();j++) {
            QNetworkAddressEntry entty = entryList.at(j);
            detail = detail+"\t"+tr("IP:")+entty.ip().toString()+"\n";
            detail = detail+"\t"+tr("子网掩码:")+entty.netmask().toString()+"\n";
            detail = detail+"\t"+tr("广播地址:")+entty.broadcast().toString()+"\n";

        }
    }
    QMessageBox::information(this,tr("Detail"),detail);
}
