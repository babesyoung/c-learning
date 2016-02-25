/*
 * Name: inverse.c
 * Purpose: 逆序输出
 * Author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int num = 0;

    printf("enter a two-digit number: ");
    scanf("%d", &num);

    printf("the reversal is: %d%d\n", num % 10, num / 10);

    return 0;
}
