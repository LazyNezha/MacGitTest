#include "game.h"

void menu() {
    printf("########################\n");
    printf("#######  1.Play  #######\n");
    printf("#######  0.Exit  #######\n");
    printf("########################\n");
}

void game() {
    char mine[ROWS][COLS];
    char show[ROWS][COLS];
    //初始化棋盘
    InitBoard(mine, ROWS, COLS, '0');
    InitBoard(show, ROWS, COLS, '*');
    //打印棋盘
    DisplayBoard(mine, ROW, COL);
    DisplayBoard(show, ROW, COL);
    //随机布置雷
    SetMine(mine, ROW, COL);
}

int main() {
    int input = 0;
    srand((unsigned int)time(NULL));
    do {
        //打印菜单
        menu();
        printf("请选择：>");
        scanf("%d", &input);
        switch (input) {
            case 1:
                //开始游戏
                game();
                break;
            case 0:
                printf("游戏已退出\n");
                break;
            default:
                printf("输入错误，请重新输入\n");
                break;
        }
    } while (input);

    return 0;
}

