#include "mainwindow.h"

#include <QMessageBox>
#include <QTimer>

#include "./ui_mainwindow.h"
#include "ansdialog.h"

void MainWindow::updateTable() {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            QTableWidgetItem* item = new QTableWidgetItem(QString(sudo->getCell(row, col)));
            item->setTextAlignment(Qt::AlignCenter);
            QChar character = item->text().at(0); // 获取第一个字符
            char value = character.toLatin1(); // 转换为char类型
            if(value!='\0'){
                item->setBackground(Qt::green);
            }
            ui->tableWidget->setItem(row, col, item);
        }
    }
}

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    sudo = new SudokuBoard(this);
    // 编辑触发条件为双击
    ui->tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
    ui->tableWidget->setRowCount(SudokuBoard::SIZE);
    ui->tableWidget->setColumnCount(SudokuBoard::SIZE);

    // 设置单元格大小
    int cellWidth = 40;
    int cellHeight = 40;
    for (int row = 0; row < 9; ++row) {
        ui->tableWidget->setRowHeight(row, cellHeight);
    }
    for (int col = 0; col < 9; ++col) {
        ui->tableWidget->setColumnWidth(col, cellWidth);
    }

    // 行号列号不可见
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->horizontalHeader()->setVisible(false);

    // 默认难度
    sudo->removeNums(6);
    updateTable();

    setWindowTitle("数独");

    // 创建定时器
    // m_timer = new QTimer(this);
    // m_timer->stop();
    // m_timer->setTimerType(Qt::PreciseTimer);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_tableWidget_cellChanged(int row, int column) {
    QTableWidgetItem* item = ui->tableWidget->item(row, column);
    if (item != nullptr) {
        QChar character = item->text().at(0); // 获取第一个字符
        char value = character.toLatin1(); // 转换为char类型
        sudo->setCell(row, column, value);
    }
}

void MainWindow::on_setLevel_clicked() {
    // 获取等级
    int level = ui->level->text().toInt();
    delete sudo;
    sudo = new SudokuBoard(this);
    sudo->removeNums(level * 6);
    updateTable();
}

// TODO：展示dialog 窗口，显示标准答案
void MainWindow::on_displayAns_clicked() {
    AnsDialog *a = new AnsDialog(this);
    a->setData(*sudo);
    a->show();
}

void MainWindow::on_submitBtn_clicked() {
    if (sudo->isSolved()) {
        QString message("恭喜你成功答对");
        int tmMsec = m_counter.elapsed();  // 流逝的时间：毫秒
        int sec = tmMsec / 1000;           // 整秒
        int hours = sec / 3600;   // 计算小时数
        int minutes = (sec % 3600) / 60;  // 计算分钟数
        int seconds = sec % 60;   // 计算剩余的秒数
        QMessageBox::information(this, "成功", message+QString::asprintf("%d 时, %d 分, %d 秒",hours,minutes,seconds) );
    } else {
        QMessageBox::information(this, "失败", "再检查检查吧");
    }
}

void MainWindow::on_btnStart_clicked()
{
    // m_timer->setInterval(1000);  // 设置定时器的周期
    // m_timer->start();
    m_counter.start();
}

