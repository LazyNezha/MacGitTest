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
    char ret = 0;
    while (1) {
        //玩家走
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //玩家赢返回 - *
        //电脑赢返回 - #
        //平局返回 - Q
        //继续游戏返回 - C
        ret = IsWin(board, ROW, COL);
        if (ret != 'C') {
            break;
        }
        //电脑走
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        ret = IsWin(board, ROW, COL);
        if (ret != 'C') {
            break;
        }
    }
    if (ret == '*') {
        printf("玩家赢了\n");
    }
    else if (ret == '#') {
        printf("电脑赢了\n");
    }
    else {
        printf("平局\n");
    }
    DisplayBoard(board, ROW, COL);
}

int main() {
    int input = 0;
    srand((unsigned int)time(NULL));
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