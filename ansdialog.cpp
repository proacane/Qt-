#include "ansdialog.h"

#include <QTableWidgetItem>
#include <QVBoxLayout>

#include "ui_ansdialog.h"

AnsDialog::AnsDialog(QWidget* parent) : QDialog(parent), ui(new Ui::AnsDialog) {
    ui->setupUi(this);

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


}

AnsDialog::~AnsDialog() {
    delete ui;
}

void AnsDialog::setData(SudokuBoard& ans) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            QTableWidgetItem* temp = new QTableWidgetItem(QString(ans.getCell(row, col)));
            QTableWidgetItem* item = new QTableWidgetItem(QString(ans.ans[row][col]));
            item->setTextAlignment(Qt::AlignCenter);

            QChar character = temp->text().at(0);  // 获取第一个字符
            char value = character.toLatin1();     // 转换为char类型
            if (value != '\0') {
                item->setBackground(Qt::green);
            }
            ui->tableWidget->setItem(row, col, item);
        }
    }

}
