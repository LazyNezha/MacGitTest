#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu() {
    printf("--------------------\n");
    printf("     双色球选号器\n");
    printf("     1.开始选号\n");
    printf("     0.退出选号\n");
    printf("--------------------\n");
}

//开始选号
void game (int count) {
    int i = 0;
    int j = 0;
    int tmp = 0;
    printf("* * * * * * * * * * * * * * * * * *\n");
    while(count) {
        //33个红球随机产生6个球
        int rand_red[6] = {0};
        for (i = 0; i < 6; i++) {
            rand_red[i] = rand() % 33 + 1;
        }
        //排序红球
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5 - i; j++) {
                if (rand_red[j] > rand_red[j + 1]) {
                    tmp = rand_red[j];
                    rand_red[j] = rand_red[j + 1];
                    rand_red[j + 1] = tmp;
                }
            }
        }
        //16个篮球随机产生1个球
        int rand_blue = rand() % 16 + 1;
        //打印
        printf("* ");
        printf("红球：");
        for (i = 0; i < 6; i++) {
            printf("%02d ", rand_red[i]);
        }
        printf("蓝球：%02d", rand_blue);
        printf("  *\n");
        count--;
    }
    printf("* * * * * * * * * * * * * * * * * *\n");
    printf("选号完成，请继续选择\n");
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
