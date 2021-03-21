#ifndef PROCESS_H
#define PROCESS_H
#include <QLabel>
#include <QDialog>
#include <QLineEdit>
#include <QProgressBar>
#include <QComboBox>
#include <QPushButton>
#include <QGridLayout>
QT_BEGIN_NAMESPACE
namespace Ui { class Process; }
QT_END_NAMESPACE

class Process : public QDialog
{
    Q_OBJECT

public:
    Process(QWidget *parent = nullptr);
    ~Process();

private:
    QLabel *fileNum;
    QLineEdit *fileNumLineEdit;
   QLabel *processType;
   QComboBox *comboBox;
   QProgressBar *progressBar;
   QPushButton *starBtn;
  QGridLayout *mainLayout;
private slots:
  void startprogress();

private:
    Ui::Process *ui;
};
#endif // PROCESS_H
