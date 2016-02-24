/*
 * Name: telephone.c
 * Purpose: 改变电话号码格式
 */

#include <stdio.h>

int main(void)
{
    int area_digit = 0, exchange_digit  = 0, number = 0;

    printf("enter phone number:[(XXX)XXX-XXXX]\n");
    scanf("(%d)%d-%d", &area_digit, &exchange_digit, &number);

    printf("you entered: %d.%d.%d\n", area_digit, exchange_digit, number);

    return 0;
}
