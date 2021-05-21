#include "tcpclient.h"
#include "ui_tcpclient.h"

tcpclient::tcpclient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tcpclient)
{
    ui->setupUi(this);
}

tcpclient::~tcpclient()
{
    delete ui;
}

