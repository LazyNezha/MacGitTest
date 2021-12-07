#ifndef TICTACTOE_GAME_H
#define TICTACTOE_GAME_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//初始化棋盘
void InitBoard (char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard (char board[ROW][COL], int row, int col);
//玩家走
void PlayerMove (char board[ROW][COL], int row, int col);
//电脑走
void ComputerMove (char board[ROW][COL], int row, int col);
//判断输赢
char IsWin (char board[ROW][COL], int row, int col);

#endif //TICTACTOE_GAME_H
