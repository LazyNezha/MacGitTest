#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu() {
    printf("####################\n");
    printf("    双色球选号器\n");
    printf("    1.开始选号\n");
    printf("    0.退出选号\n");
    printf("####################\n");

}

void game (int count) {
    printf("--------------------------------\n");
    while (count) {
        int i = 0;
        int num = 6;
        int redball[33] = { 0 };
        //33个红球全部初始化为0
        for (i = 0; i < 33; i++) {
            redball[i] = 0;
        }
        //随机插入6个1；
        while (num) {
            int x = rand() % 33;
            if (redball[x] == 0) {
                redball[x] = 1;
                num--;
            }
        }
        //生成6个随机红球
        printf("红球：");
        for (i = 0; i < 33; i++) {
            if (redball[i] == 1) {
                printf("%02d ", i + 1);
            }
        }
        printf("| ");
        //生成一个随机蓝球
        int blueball = rand() % 16 + 1;
        printf("蓝球：%02d", blueball);
        printf("\n");
        count--;
    }
    printf("--------------------------------\n");
    printf("选号结束，请重新选择\n");
}

int main() {
    int input = 0;
    int count = 0;
    srand((unsigned int)time(NULL));
    do {
        menu();
        printf("请选择：>");
        scanf("%d", &input);
        if (1 == input) {
            printf("需要生产几注？：>");
            scanf("%d", &count);
        }
        switch (input) {
            case 1:
                game(count);
                break;
            case 0:
                printf("选号器程序退出\n");
                break;
            default:
                printf("输入错误，请重新输入\n");
                break;
        }
    } while (input);

    return 0;
}
