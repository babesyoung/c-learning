/*
 * name: pay_amount.c
 * purpose: pay amount
 * author: babes young
 */

#include <stdio.h>

void pay_amount(int, int *, int *, int *, int *);

int main(void)
{
    int dollars, twenties, tens, fives, ones;

    printf("enter a dollar amount:\n");
    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);
    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", twenties, tens, fives, ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars = dollars % 20;

    *tens = dollars / 10;
    dollars = dollars % 10;

    *fives = dollars / 5;
    *ones = dollars % 5;
}
