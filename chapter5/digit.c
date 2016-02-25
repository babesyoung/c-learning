/*
 * name: digit.c
 * purpose: 输出数字的位数
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int number = 0;

    printf("enter a number(0-32767):\n");
    scanf("%d", &number);

    printf("the number %d has", number);

    if (number < 10) {
        printf(" 1 ");
    } else if(number < 100){
        printf(" 2 ");
    } else if (number < 1000) {
        printf(" 3 ");
    } else if (number < 10000) {
        printf(" 4 ");
    } else {
        printf(" 5 ");
    }

    printf("digits\n");

    return 0;
}
