#ifndef TICTACTOE_GAME_H
#define TICTACTOE_GAME_H

#include <stdio.h>

#define ROW 3
#define COL 3

//初始化棋盘
void InitBoard (char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard (char board[ROW][COL], int row, int col);

#endif //TICTACTOE_GAME_H
