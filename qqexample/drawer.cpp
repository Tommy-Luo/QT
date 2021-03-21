#include "drawer.h"

drawer::drawer(QWidget *parent,Qt::WindowFlags f)
    :QToolBox(parent,f)
{
    toolBtn1_1 = new QToolButton;
    toolBtn1_1->setText(tr("张三"));
    toolBtn2_1 = new QToolButton;
    toolBtn2_1->setText(tr("李四"));
    toolBtn3_1 = new QToolButton;
    toolBtn3_1->setText(tr("王二"));

    QGroupBox *groupbox1 = new QGroupBox;
    QVBoxLayout *mainLayout1 = new QVBoxLayout(groupbox1);
    mainLayout1->setAlignment(Qt::AlignCenter);
   mainLayout1->addWidget(toolBtn1_1);
  mainLayout1->addWidget(toolBtn2_1);
  mainLayout1->addWidget(toolBtn3_1);
  this->addItem((QWidget*)groupbox1,tr("我的好友"));

  toolBtn1_2 = new QToolButton;
  toolBtn2_2 = new QToolButton;
  toolBtn3_2 = new QToolButton;
  QGroupBox *groupbox2 = new QGroupBox;
  QVBoxLayout *mainLayout2 = new QVBoxLayout(groupbox2);
  mainLayout2->setAlignment(Qt::AlignCenter);
 mainLayout2->addWidget(toolBtn1_2);
mainLayout2->addWidget(toolBtn2_2);
mainLayout2->addWidget(toolBtn3_2);
this->addItem((QWidget*)groupbox2,tr("我的同学"));


}
