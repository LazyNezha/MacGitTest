#include "game.h"

void menu () {
    printf("######################\n");
    printf("###### 1. play #######\n");
    printf("###### 0. exit #######\n");
    printf("######################\n");
}

void game () {
    char mine[ROWS][COLS];//存放布置好的雷的信息
    char show[ROWS][COLS];//存放排插出来的雷的信息
    //初始化数组
    InitBoard(mine, ROWS, COLS, '0');// '0'
    InitBoard(show, ROWS, COLS, '*');// '*'
    //打印棋盘
    DisplayBoard(mine, ROW, COL);
    DisplayBoard(show, ROW, COL);
}

int main() {
    int input = 0;
    do {
        menu();
        printf("请选择：>");
        scanf("%d", &input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误，请重新输入\n");
                break;
        }
    } while (input);

    return 0;
}