/*
 * name: reverse.c
 * purpose:  反向输出数组
 * author: babesyoung
 */

#include <stdio.h>

#define SIZE (int)(sizeof(num) / sizeof(num[0]))

int main(void)
{
    int num[10] = {0};
    printf("enter %d numbers\n", SIZE);

    for (int i = 0; i < SIZE; i++) {
        scanf("%d ", &num[i]);
    }

    printf("reverse order:\n");
    for (int i = SIZE - 1; i >= 0; i--) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
