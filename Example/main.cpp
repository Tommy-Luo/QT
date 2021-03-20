#include "content.h"
#include <QSplitter>
#include <QApplication>
#include <QListWidget>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

   QSplitter *splitterMain = new QSplitter(Qt::Horizontal,0);
   splitterMain->setOpaqueResize(true);
   QListWidget *list = new QListWidget(splitterMain);
   list->insertItem(0,QObject::tr("基本信息"));
   list->insertItem(1,QObject::tr("联系方式"));
   list->insertItem(2,QObject::tr("详细资料"));

   content *_content = new content(splitterMain);
   QObject::connect(list,SIGNAL(currentRowChanged(int)),_content->stackdewidget,SLOT(setCurrentIndex(int)));
   splitterMain->setWindowTitle(QObject::tr("修改用户资料"));
   splitterMain->setMinimumSize(splitterMain->minimumSize());
   splitterMain->setMinimumSize(splitterMain->maximumSize());
   splitterMain->show();

//    content w;
//    w.show();
    return a.exec();
}
