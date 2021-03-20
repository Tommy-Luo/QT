#include "baseinfo.h"

baseinfo::baseinfo(QWidget *parent) : QWidget(parent)
{
     usernamelabel = new QLabel(tr("用户名:"));
     usernameedit = new QLineEdit;
     namelabel = new QLabel(tr("姓名:"));
     nameedit = new QLineEdit;

     sexlabel = new QLabel(tr("性别"));
     sexcombobox = new QComboBox;

     sexcombobox->addItem(tr("男"));
     sexcombobox->addItem(tr("女"));

     departmentlabel = new QLabel(tr("部门:"));
     apartmenttextedit = new QTextEdit;

     agelabel = new QLabel(tr("年龄:"));
     ageedit = new QLineEdit;

     otherlabel = new QLabel(tr("备注:"));
     otherlabel->setFrameStyle(QFrame::Panel|QFrame::Sunken);

     leflayout = new QGridLayout();
     leflayout->addWidget(usernamelabel,0,0);
     leflayout->addWidget(usernameedit,0,1);
     leflayout->addWidget(namelabel,1,0);
     leflayout->addWidget(nameedit,1,1);
     leflayout->addWidget(sexlabel,2,0);
     leflayout->addWidget(sexcombobox,2,1);
     leflayout->addWidget(departmentlabel,3,0);
     leflayout->addWidget(apartmenttextedit,3,1);
     leflayout->addWidget(agelabel,4,0);
     leflayout->addWidget(ageedit,4,1);
     leflayout->addWidget(otherlabel,5,0);
     leflayout->setColumnStretch(0,1);
     leflayout->setColumnStretch(1,3);

     headlabel = new QLabel(tr("头像:"));
     headiconlabel = new QLabel;
     updateBtn = new QPushButton(tr("更新"));
     toprightlayout = new QHBoxLayout();
     toprightlayout->setSpacing(20);
     toprightlayout->addWidget(headlabel);
     toprightlayout->addWidget(headiconlabel);
     toprightlayout->addWidget(updateBtn);
     introductionlabel = new QLabel(tr("个人说明:"));
     introductiontextedit = new QTextEdit;
     rightlayut = new QVBoxLayout();
     rightlayut->setMargin(10);
     rightlayut->addLayout(toprightlayout);
     rightlayut->addWidget(introductionlabel);
     rightlayut->addWidget(introductiontextedit);

     QGridLayout *mainlayout = new QGridLayout(this);
     mainlayout->setMargin(15);
     mainlayout->setSpacing(10);
     mainlayout->addLayout(leflayout,0,0);
     mainlayout->addLayout(rightlayut,0,1);
     mainlayout->setSizeConstraint(QLayout::SetFixedSize);







}
