/*
 * name: poly.c
 * purpose: polynomial multiplication
 * author: babes young
 */

#include <stdio.h>

int power_odd(int, int);
int power_even(int, int);

int main(void)
{
    int number;

    printf("enter a number:\n");
    scanf("%d", &number);

    int total = 3 * power_odd(number, 5) + 2 * power_even(number, 4) - 5 * power_odd(number, 3) -
        power_even(number, 2) + 7 * number - 6;

    printf("total:%d\n", total);

    return 0;
}


int power_odd(int number, int odd)
{
    if (odd == 1) {
        return number;
    } else {
        return number * power_even(number, odd - 1);
    }
}

int power_even(int number, int even)
{
    if (even == 1) {
        return number;
    } else {
        return power_even(number, even / 2) * power_even(number, even / 2);
    }
}
