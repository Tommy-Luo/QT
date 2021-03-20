#include "content.h"

content::content(QWidget *parent)
    : QFrame(parent)
{
    setWindowTitle(tr("Example"));
    stackdewidget = new QStackedWidget(this);
    stackdewidget->setFrameStyle(QFrame::Panel|QFrame::Raised);
    _baseinfo = new baseinfo();
    _contact = new contact();
    _detail = new detail();

    stackdewidget->addWidget(_baseinfo);
    stackdewidget->addWidget(_contact);
    stackdewidget->addWidget(_detail);
    amenBtn = new QPushButton(tr("修改"));
    closeBtn = new QPushButton(tr("关闭"));

    QHBoxLayout *BtnLayout = new QHBoxLayout;
    BtnLayout->addStretch(1);
    BtnLayout->addWidget(amenBtn);
    BtnLayout->addWidget(closeBtn);

    QVBoxLayout *rightlayout = new QVBoxLayout(this);
    rightlayout->setMargin(10);
    rightlayout->setSpacing(6);
    rightlayout->addWidget(stackdewidget);
    rightlayout->addLayout(BtnLayout);




}

content::~content()
{
}

