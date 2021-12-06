#include "game.h"

void menu() {
    printf("######################\n");
    printf("###### 1. play #######\n");
    printf("###### 0. exit #######\n");
    printf("######################\n");
}

void game() {
    //创建二维数组，存储棋盘数据
    char board[ROW][COL];
    //初始化棋盘
    InitBoard(board, ROW, COL);
    //打印棋盘
    DisplayBoard(board, ROW, COL);
}

int main() {
    int input = 0;
    do {
        menu();
        printf("请输入：>");
        scanf("%d", &input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                printf("游戏结束\n");
                break;
            default:
                printf("输入错误，请重新输入");
                break;
        }
    } while (input);

    return 0;
}