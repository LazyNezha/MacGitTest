#ifndef TEST1_GAME_H
#define TEST1_GAME_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

//初始化棋盘
void InitBoard (char board[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
void DisplayBoard (char board[ROWS][COLS], int row, int col);
//布置雷
void SetMine (mine[ROWS][COLS], int row, int col);

#endif //TEST1_GAME_H
