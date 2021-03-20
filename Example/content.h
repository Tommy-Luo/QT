#ifndef CONTENT_H
#define CONTENT_H

#include <QDialog>
#include <QFrame>
#include <QStackedWidget>
#include <QPushButton>
#include "baseinfo.h"
#include "contact.h"
#include "detail.h"
class content : public QFrame
{
    Q_OBJECT

public:
    content(QWidget *parent = nullptr);
    ~content();


    QStackedWidget  *stackdewidget;
    QPushButton *amenBtn;
    QPushButton *closeBtn;
    baseinfo *_baseinfo;
    contact *_contact;
    detail *_detail;




};
#endif // CONTENT_H
