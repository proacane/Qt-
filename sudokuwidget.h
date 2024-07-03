#ifndef SUDOKUWIDGET_H
#define SUDOKUWIDGET_H

#include "sudokuboard.h"

#include <QTableWidget>
#include <QWidget>

class SudokuWidget : public QWidget {
    Q_OBJECT

private:
    SudokuBoard board;
    QTableWidget *table;

    // 设计组件布局
    void setUpUi();
  public:
    explicit SudokuWidget(QWidget* parent = nullptr);

  signals:

private slots:
    void onCellChanged(int row,int col);
};

#endif  // SUDOKUWIDGET_H
