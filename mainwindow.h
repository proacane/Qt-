#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QElapsedTimer>
#include <QMainWindow>

#include "sudokuboard.h"
QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT
  private:
    SudokuBoard* sudo;
    // 更新数独显示信息
    void updateTable();

    // 定时器
    // QTimer* m_timer;
    //计时器
    QElapsedTimer  m_counter;

  public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

  private slots:

    void on_tableWidget_cellChanged(int row, int column);

    void on_setLevel_clicked();

    void on_displayAns_clicked();

    void on_submitBtn_clicked();

    void on_btnStart_clicked();

private:
    Ui::MainWindow* ui;
};
#endif  // MAINWINDOW_H
