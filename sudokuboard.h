#ifndef SUDOKUBOARD_H
#define SUDOKUBOARD_H

#include <QObject>
#include <QVector>

/**
 * @brief The SudokuBoard class数独类，包含答案棋盘，操作棋盘，判断结果是否正确
 */
class SudokuBoard : public QObject {
    Q_OBJECT
  private:
    // 问题棋盘
    QVector<QVector<char>> board;


    // 填充棋盘时检查是否合法
    bool checkAns(int row, int col, char value);
    // 生成一个完整的棋盘
    bool fillAns();

    // 移除元素后的合法性检查
    bool isValid(int row, int col, char value,QVector<QVector<char>> &tempBoard);

    // 检查棋盘是否有解
    bool checkBoard(QVector<QVector<char>> &tempBoard,int& solCount);

    // 数独是否有唯一解
    bool hasUniqueSolution();

  public:
    // 完整棋盘
    QVector<QVector<char>> ans;

    // 固定9*9大小
    static const int SIZE = 9;
    SudokuBoard(QObject *parent = nullptr);

    // 棋盘中随机移除 num 个数字
    void removeNums(int num);

    // 获取某个位置的元素
    char getCell(int row, int col) const {
        return board[row][col];
    }

    // 设置某个位置的元素
    void setCell(int row, int col, char value) {
        board[row][col] = value;
    }

    // 提交答案是否正确
    bool isSolved();


};

#endif  // SUDOKUBOARD_H
