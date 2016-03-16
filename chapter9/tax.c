/*
 * name: tax.c
 * purpose: compute the tax
 * author: babes young
 */

#include <stdio.h>

float tax(int);

int main(void)
{
    int salary;

    printf("enter your salary:\n");
    scanf("%d", &salary);

    printf("the tax of you: %.2f\n", tax(salary));

    return 0;
}

float tax(int salary)
{
    float tax = 0.0f;

    if (salary > 7000.00f) {
        tax = 230.00f + (salary - 7000.00f) * .06;
    } else if (salary > 5250.00f) {
        tax = 142.50f + (salary - 5250.00f) * .05;
    } else if (salary > 3750.00f) {
        tax = 82.50f + (salary - 3750.00f) * .04;
    } else if (salary > 2250.00f) {
        tax = 37.50f + (salary - 2250.0f) * .03;
    } else if (salary > 750) {
        tax = 7.50f + (salary - 750.00f) * .02;
    } else {
        tax = salary * .01;
    }

    return tax;
}
