#include "process.h"
#include "ui_process.h"
#include <QProgressDialog>

Process::Process(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Process)
{
    ui->setupUi(this);
    mainLayout = new QGridLayout(this);

    fileNum = new QLabel(tr("文件数目:"));
    fileNumLineEdit = new QLineEdit;
    fileNumLineEdit->setText(tr("100000"));
    processType = new QLabel(tr("显示类型:"));
    comboBox = new QComboBox;
    comboBox->addItem("progressBar");
    comboBox->addItem("progressDlg");
    starBtn = new QPushButton;
    starBtn->setText(tr("STRAT"));
    progressBar = new QProgressBar;
    mainLayout->addWidget(fileNum,0,0);
    mainLayout->addWidget(fileNumLineEdit,0,1);
    mainLayout->addWidget(processType,1,0);
    mainLayout->addWidget(comboBox,1,1);
    mainLayout->addWidget(progressBar,2,0,1,2);
    mainLayout->addWidget(starBtn,3,0,1,2);
    mainLayout->setMargin(150);
    mainLayout->setSpacing(100);
   connect(starBtn,SIGNAL(clicked()),this,SLOT(startprogress()));

}

Process::~Process()
{
    delete ui;
}
void Process::startprogress()
{
    bool ok;
    int num = fileNumLineEdit->text().toInt(&ok);
    if(comboBox->currentIndex() == 0){
        progressBar->setRange(0,num);
        for (int i = 1;i < num+1;i++) {
            progressBar->setValue(i);
        }
    }else if(comboBox->currentIndex() == 1){
        QProgressDialog *progressdlg = new QProgressDialog(this);
        progressdlg->setWindowModality(Qt::WindowModal);
        progressdlg->setMinimumDuration(4);
        progressdlg->setWindowTitle(tr("Please wait"));
progressdlg->setLabelText(tr("copying---"));
progressdlg->setCancelButtonText(tr("CANCEL"));
progressdlg->setRange(0,num);
for (int i = 1;i < num+1;i++) {
    progressdlg->setValue(i);
    if(progressdlg->wasCanceled())
        return;

}


    }

}


