#ifndef DETAIL_H
#define DETAIL_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QCheckBox>
#include <QGridLayout>
#include <QComboBox>

class detail : public QWidget
{
    Q_OBJECT
public:
    explicit detail(QWidget *parent = nullptr);

signals:
private:
     QLabel *nationlabel;
     QComboBox *nationcombobox;
     QLabel *provincelabel;
     QComboBox *provincecombobox;
     QLabel *citylabel;
     QLineEdit *citylineEdit;
     QLabel *personaldetaillabel;
     QTextEdit *personaldetailEdit;
     QGridLayout *mainlayout;


public slots:
};

#endif // DETAIL_H
