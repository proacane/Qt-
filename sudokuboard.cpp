#include "sudokuboard.h"

SudokuBoard::SudokuBoard(QObject* parent) :
    QObject(parent), board(SIZE, QVector<char>(SIZE, 0)), ans(SIZE, QVector<char>(SIZE, 0)) {
    // 随机生成完整棋盘
    std::srand(std::time(0));  // 设置随机数种子
    fillAns();
    for (size_t i = 0; i < ans.size(); ++i) {
        std::copy(ans[i].begin(), ans[i].end(), board[i].begin());
    }
}

bool SudokuBoard::fillAns() {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (ans[row][col] == '\0') {
                std::vector<char> numbers = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
                std::random_shuffle(numbers.begin(), numbers.end());
                for (char num : numbers) {
                    if (checkAns(row, col, num)) {
                        ans[row][col] = num;
                        if (fillAns()) {
                            return true;
                        }
                        ans[row][col] = '\0';
                    }
                }
                return false;
            }
        }
    }
    return true;
}

bool SudokuBoard::isValid(int row, int col, char value,QVector<QVector<char>> &tempBoard) {
    // 同行不能有重复
    for (int i = 0; i < 9; i++) {
        if (tempBoard[row][i] == value) {
            return false;
        }
    }

    // 同列不能重复
    for (int j = 0; j < 9; j++) {
        if (tempBoard[j][col] == value) {
            return false;
        }
    }

    // 3*3 方格内不能重复
    int rowIndex = (row / 3) * 3;
    int colIndex = (col / 3) * 3;

    for (int i = rowIndex; i < rowIndex + 3; i++) {
        for (int j = colIndex; j < colIndex + 3; j++) {
            if (tempBoard[i][j] == value) {
                return false;
            }
        }
    }

    return true;
}

bool SudokuBoard::checkBoard(QVector<QVector<char>> &tempBoard,int& solCount) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (tempBoard[row][col] == '\0') {
                for (char num = '1'; num <= '9'; num++) {
                    if (isValid(row, col, num,tempBoard)) {
                        tempBoard[row][col] = num;
                        if (checkBoard(tempBoard,solCount)) {
                            return true;
                        }
                        tempBoard[row][col] = '\0';
                    }
                }
                return false;
            }
        }
    }
    solCount++;
    return solCount == 1;
}

bool SudokuBoard::hasUniqueSolution() {
    int solutionCount = 0;
    QVector<QVector<char>> tempBoard = board;
    checkBoard(tempBoard,solutionCount);
    return solutionCount == 1;
}

void SudokuBoard::removeNums(int num) {
    int count = 0;
    QVector<QVector<char>> backUpBoard;
    while (count < num) {
        // 备份
        backUpBoard = board;
        // 随机删除某行某列
        int row = rand() % 9;
        int col = rand() % 9;
        // 还未被删除
        if (board[row][col] != '\0') {
            board[row][col] = '\0';
            // 删除了还能有唯一解就保留
            if (hasUniqueSolution()) {
                count++;
            } else {
                // 否则就回退
                board = backUpBoard;
            }
        }
    }
}

bool SudokuBoard::checkAns(int row, int col, char value) {
    // 同行不能有重复
    for (int i = 0; i < 9; i++) {
        if (ans[row][i] == value) {
            return false;
        }
    }

    // 同列不能重复
    for (int j = 0; j < 9; j++) {
        if (ans[j][col] == value) {
            return false;
        }
    }

    // 3*3 方格内不能重复
    int rowIndex = (row / 3) * 3;
    int colIndex = (col / 3) * 3;

    for (int i = rowIndex; i < rowIndex + 3; i++) {
        for (int j = colIndex; j < colIndex + 3; j++) {
            if (ans[i][j] == value) {
                return false;
            }
        }
    }

    return true;
}

bool SudokuBoard::isSolved() {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] != ans[i][j])
                return false;
        }
    }
    return true;
}
