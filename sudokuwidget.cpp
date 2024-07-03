#include "sudokuwidget.h"

SudokuWidget::SudokuWidget(QWidget* parent) : QWidget{parent} {
}

void SudokuWidget::setUpUi() {
    table = new QTableWidget(SudokuBoard::SIZE,SudokuBoard::SIZE,this);
}
