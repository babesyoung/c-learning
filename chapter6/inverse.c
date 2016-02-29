/*
 * name: inverse.c
 * purpose: 逆序输出
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int number = 0, digit = 0;

    printf("enter a integer number:\n");
    scanf("%d", &number);

    do {
        number /= 10;
        digit++;
    } while (number > 0);
    printf("the integer number has %d digit\n", digit);

    return 0;
}
