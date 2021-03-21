#ifndef DRAWER_H
#define DRAWER_H
#include <QToolBox>
#include <QToolButton>
#include <QGroupBox>
#include <QVBoxLayout>
class drawer : public QToolBox
{
public:
    drawer(QWidget *parent = nullptr,Qt::WindowFlags f = nullptr);
private:
    QToolButton *toolBtn1_1;
    QToolButton *toolBtn1_2;
    QToolButton *toolBtn1_3;
    QToolButton *toolBtn2_1;
    QToolButton *toolBtn2_2;
    QToolButton *toolBtn3_1;
    QToolButton *toolBtn3_2;
    QToolButton *toolBtn3_3;



};

#endif // DRAWER_H
