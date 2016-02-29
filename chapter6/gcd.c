/*
 * name: gcd.c
 * purpose: 计算两个数的最大公约数(Euclid算法)
 * author: babesyoung
 */


#include <stdio.h>

int main(void)
{
    int num1 = 0, num2 = 0, gcd = 0;

    printf("enter 2 integers:(xx xx)\n");
    scanf("%d %d", &num1, &num2);

    while (num2 != 0) {
        gcd = num1;
        num1 = num2;
        num2 = gcd % num2;
    }
    gcd = num1;
    printf("greatest common divisor: %d\n", gcd);

    return 0;
}
