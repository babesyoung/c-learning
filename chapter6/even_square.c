/*
 * name: even_square.c
 * purpose: 输出指定范围内偶数的平方
 * author: babeyoung
 */

#include <stdio.h>

int main(void)
{
    int upper_limit = 0;

    printf("enter a upper_limit number:\n");
    scanf("%d", &upper_limit);

    for (int i = 1; i <= upper_limit / 2; i++) {
        printf("%d\n", 4 * i * i);
    }

    return 0;
}
