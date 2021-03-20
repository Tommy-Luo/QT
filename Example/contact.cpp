#include "contact.h"

contact::contact(QWidget *parent) : QWidget(parent)
{     mainlayout = new QGridLayout(this);
      mainlayout->setMargin(50);
      mainlayout->setSpacing(50);
       mainlayout->setSizeConstraint(QLayout::SetFixedSize);
      emaillabel = new QLabel(tr("邮箱地址:"));
      emailEdit = new QLineEdit;
      mainlayout->addWidget(emaillabel,0,0);
      mainlayout->addWidget(emailEdit,0,1);

      addresslabel = new QLabel(tr("联系地址:"));
      addressEdit = new QLineEdit;
      mainlayout->addWidget(addresslabel,1,0);
      mainlayout->addWidget(addressEdit,1,1);

      yzbmlabel = new QLabel(tr("邮政编码:"));
      yzbmEdit = new QLineEdit;
     mainlayout->addWidget(yzbmlabel,3,0);
     mainlayout->addWidget(yzbmEdit,3,1);

       phonelabel = new QLabel(tr("联系电话:"));
       phoneEdit = new QLineEdit;
         checkbox = new QCheckBox(tr("接受留言"));
       mainlayout->addWidget(phonelabel,4,0);
         mainlayout->addWidget(phoneEdit,4,1);
           mainlayout->addWidget(checkbox,4,2);

        phone2label = new QLabel(tr("办公电话:"));
        phone2Edit = new QLineEdit;
          mainlayout->addWidget(phone2label,5,0);
            mainlayout->addWidget(phone2Edit,5,1);





}
