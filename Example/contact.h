#ifndef CONTACT_H
#define CONTACT_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QGridLayout>
class contact : public QWidget
{
    Q_OBJECT
public:
    explicit contact(QWidget *parent = nullptr);

signals:

private:
    QLabel *emaillabel;
    QLabel *addresslabel;
    QLabel *yzbmlabel;
    QLabel *phonelabel;
    QCheckBox *checkbox;
    QLabel *phone2label;

    QLineEdit *emailEdit;
    QLineEdit *addressEdit;
    QLineEdit *yzbmEdit;
    QLineEdit *phoneEdit;
    QLineEdit *phone2Edit;

    QGridLayout *mainlayout;

public slots:
};

#endif // CONTACT_H
