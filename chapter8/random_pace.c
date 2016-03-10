/*
 * name: random_pace.c
 * purpose: 随机步伐
 * author: babesyoung
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define TOWARD 4

int main(void)
{
    char array[10][10] = {
        {'A', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}
    };
    int next_pace, x_now = 0, y_now = 0;
    char ch_now = 'A';

    srand((unsigned) time(NULL));

    //指示下一步的移动方向 0 ⬆️，1 ⬇️，2⬅️，3 ⬇️。
    for (;;) {
        if (((x_now == 0 || array[x_now - 1][y_now] != '.') &&
            (x_now == 9 || array[x_now + 1][y_now] != '.') &&
            (y_now == 0 || array[x_now][y_now - 1] != '.') &&
            (y_now == 9 || array[x_now][y_now + 1] != '.')) ||
            ch_now == 'Z') {
            break;
        } else {
            next_pace = rand() % TOWARD;
            switch (next_pace) {
                case 0:
                    x_now -= 1;
                    if (x_now < 0 || array[x_now][y_now] != '.') {
                        //恢复 x_now
                        x_now += 1;
                        continue;
                    } else {
                        ch_now += 1;
                        array[x_now][y_now] = ch_now;
                    }
                    break;
                case 1:
                    x_now += 1;
                    if (x_now > 9 || array[x_now][y_now] != '.') {
                        x_now -= 1;
                        continue;
                    } else {
                        ch_now += 1;
                        array[x_now][y_now] = ch_now;
                    }
                    break;
                case 2:
                    y_now -= 1;
                    if (y_now < 0 || array[x_now][y_now] != '.') {
                        y_now += 1;
                        continue;
                    } else {
                        ch_now += 1;
                        array[x_now][y_now] = ch_now;
                    }
                    break;
                case 3:
                    y_now += 1;
                    if (y_now > 9 || array[x_now][y_now] != '.') {
                        y_now -= 1;
                        continue;
                    } else {
                        ch_now += 1;
                        array[x_now][y_now] = ch_now;
                    }
                    break;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
