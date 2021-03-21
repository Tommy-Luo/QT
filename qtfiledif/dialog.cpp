#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    fileBtn = new QPushButton;
    fileBtn->setText(tr("文件标准对话框"));
    fileLineEdit = new QLineEdit;
   mainLayout = new QGridLayout(this);
   mainLayout->addWidget(fileBtn,0,0);
   mainLayout->addWidget(fileLineEdit,0,1);
  connect(fileBtn,SIGNAL(clicked()),this,SLOT(showFileDlg()));


}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::showFileDlg()
{
     QString s = QFileDialog::getOpenFileName(this,"open file dlg","","c++ files(*.cpp);;C files(*.c);;Head files(*.h)");
     fileLineEdit->setText(s);
}
