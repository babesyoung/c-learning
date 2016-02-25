/*
 * name: ten2eight.c
 * purpose: 十进制->八进制
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int decade = 0;

    printf("enter a decimal number between 0 and 32767:\n");
    scanf("%u", &decade);

    printf("the octal number is: %5.5o\n", decade);

    return 0;
}
