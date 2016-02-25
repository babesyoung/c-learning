/*
 * Name: inverse2
 * Purpose: 逆序输出
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int num = 0;

    printf("enter a three-digit number:");
    scanf("%d", &num);

    printf("the reversal is: %d%d%d\n", (num % 100) % 10, (num % 100) / 10, num / 100);

    return 0;
}
