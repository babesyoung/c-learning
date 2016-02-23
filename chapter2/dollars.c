/*
 * Name: dollars.c
 * Purpose: 计算如何用最少的20、10、5、1美金来付款
 * Author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int dollars = 0;

    printf("enter a dollar amount:\n");
    scanf("%d", &dollars);

    printf("$20 bills: %d\n", dollars / 20);
    dollars = dollars % 20;
    printf("$10 bills: %d\n", dollars / 10);
    dollars = dollars % 10;
    printf(" $5 bills: %d\n", dollars / 5);
    dollars = dollars % 5;
    printf(" $1 bills: %d\n", dollars / 1);

    return 0;
}
