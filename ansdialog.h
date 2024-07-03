#ifndef ANSDIALOG_H
#define ANSDIALOG_H

#include <QDialog>
#include"sudokuboard.h"
namespace Ui {
    class AnsDialog;
}

class AnsDialog : public QDialog {
    Q_OBJECT
  public:
    explicit AnsDialog(QWidget* parent = nullptr);
    ~AnsDialog();

    void setData(SudokuBoard &ans);
  private:
    Ui::AnsDialog* ui;
};

#endif  // ANSDIALOG_H
