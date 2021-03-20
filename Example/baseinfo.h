#ifndef BASEINFO_H
#define BASEINFO_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QTextEdit>
#include <QGridLayout>
#include <QPushButton>
#include <QVBoxLayout>

class baseinfo : public QWidget
{
    Q_OBJECT
public:
    explicit baseinfo(QWidget *parent = nullptr);

signals:

public slots:


private:
    QLabel *usernamelabel;
    QLabel *namelabel;
    QLabel *sexlabel;
    QLabel *departmentlabel;
    QLabel *agelabel;
    QLabel *otherlabel;
    QLineEdit *usernameedit;
    QLineEdit *nameedit;
    QComboBox *sexcombobox;
    QTextEdit *apartmenttextedit;
    QLineEdit *ageedit;

    QGridLayout *leflayout;

    QLabel *headlabel;
    QLabel *headiconlabel;
    QPushButton *updateBtn;

    QHBoxLayout *toprightlayout;

    QLabel *introductionlabel;
    QTextEdit *introductiontextedit;
    QVBoxLayout *rightlayut;


};

#endif // BASEINFO_H
