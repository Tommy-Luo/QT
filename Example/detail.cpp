#include "detail.h"

detail::detail(QWidget *parent) : QWidget(parent)
{

    mainlayout = new QGridLayout(this);

    nationlabel = new QLabel(tr("国家:"));
    nationcombobox = new QComboBox;
    nationcombobox->insertItem(0,tr("CHINA"));
    nationcombobox->insertItem(1,tr("USA"));
   mainlayout->addWidget(nationlabel,0,0);
   mainlayout->addWidget(nationcombobox,0,1);

   provincelabel = new QLabel(tr("省份:"));
   provincecombobox = new QComboBox;
   provincecombobox->insertItem(0,"Florida");
   provincecombobox->insertItem(1,"BEIJING");
   provincecombobox->insertItem(2,"GUIZHOU");
   mainlayout->addWidget(provincelabel,1,0);
   mainlayout->addWidget(provincecombobox,1,1);

   citylabel = new QLabel(tr("城市:"));
   citylineEdit = new QLineEdit;
   mainlayout->addWidget(citylabel,2,0);
   mainlayout->addWidget(citylineEdit,2,1);

   personaldetaillabel = new QLabel(tr("详情:"));
   personaldetailEdit = new QTextEdit;
   mainlayout->addWidget(personaldetaillabel,3,0);
   mainlayout->addWidget(personaldetailEdit,3,1);








}
