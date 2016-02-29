/*
 * name: fraction_low.c
 * purpose: 将分数化为最简式
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int numerator = 0, denominator = 1, gcd = 1,
        numerator_cache = 0, denominator_cache = 1;

    printf("enter a fraction:(xx/xx)\n");
    scanf("%d/%d", &numerator, &denominator);

    numerator_cache = numerator;
    denominator_cache = denominator;

    /*计算最大公约数*/
    while (denominator != 0) {
        gcd = numerator;
        numerator = denominator;
        denominator = gcd % denominator;
    }
    gcd = numerator;

    printf("in lowest terms: %d/%d\n", numerator_cache / gcd, denominator_cache / gcd);

    return 0;
}
