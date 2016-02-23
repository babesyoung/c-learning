/*
 * Name: payment.c
 * Purpose: 计算贷款余额
 * Author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    float loan = 0.0, rate = 0.0, monthly_payment = 0.0;

    printf("enter amount of loan:\n");
    scanf("%f", &loan);
    printf("enter interest rate:\n");
    scanf("%f", &rate);
    printf("enter monthly payment:\n");
    scanf("%f", &monthly_payment);

    loan = loan * (1 + rate / 1200) - monthly_payment;
    printf("balance remaining after first payment: %.2f\n", loan);

    loan = loan * (1 + rate / 1200) - monthly_payment;
    printf("balance remaining after second payment: %.2f\n", loan);

    loan = loan * (1 + rate / 1200) - monthly_payment;
    printf("balance remaining after third payment: %.2f\n", loan);

    return 0;
}

