/*
 * name: fraction_low.c
 * purpose: fraction lowest
 * author: babes young
 */

#include <stdio.h>

void reduce(int, int, int*, int*);

int main(void)
{
    int numerator = 0, denominator = 1,
        reduced_numerator = 0, reduced_denominator = 1;

    printf("enter a fraction:(xx/xx)\n");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

    printf("in lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
   int  gcd,
        numerator_cache = numerator,
        denominator_cache = denominator;

    /*计算最大公约数*/
    while (denominator != 0) {
        gcd = numerator;
        numerator = denominator;
        denominator = gcd % denominator;
    }
    gcd = numerator;

    *reduced_numerator = numerator_cache / gcd;
    *reduced_denominator = denominator_cache / gcd;
}
