/*
 * name: tax.c
 * purpose: 计算所需纳税金额
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    float salary = 0.00f, tax = 0.00f;

    printf("enter your salary:\n");
    scanf("%f", &salary);

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

    printf("the tax of you: $%.2f\n", tax);

    return 0;
}
