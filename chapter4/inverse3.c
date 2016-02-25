/*
 * name: inverse3.c
 * purpose: 逆序输出3位数字
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int unit = 0, decade = 0, hundred = 0;

    printf("enter a three-digit number:\n");
    scanf("%1d%1d%1d", &hundred, &decade, &unit);

    printf("the reversal is: %d%d%d\n", unit, decade, hundred);

    return 0;
}
