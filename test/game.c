#include "game.h"
//初始化棋盘
void InitBoard (char board[ROWS][COLS], int rows, int cols, char set) {
    int i = 0;
    int j = 0;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            board[i][j] = set;
        }
    }
}
//打印棋盘
void DisplayBoard (char board[ROWS][COLS], int row, int col) {
    int i = 0;
    int j = 0;
    printf("------------扫雷游戏--------------\n");
    for (i = 0; i <= col; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (i = 1; i <= row; i++) {
        printf("%d ", i);
        for (j = 1; j <= col; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    //printf("------------扫雷游戏--------------\n");
}
//随机设置雷
void SetMine (mine[ROWS][COLS], int row, int col) {
    int x = rand() % row + 1;
    int y = rand() % col + 1;
}
