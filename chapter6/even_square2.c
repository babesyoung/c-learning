/*
 * name: even_square2.c
 * purpose: 输出指定范围内偶数的平方(不允许使用乘法)
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int square = 4, even = 12, number = 0;

    printf("enter a limit number:\n");
    scanf("%d", &number);

    for (int i = 1; i <= number / 2; even += 8) {
        printf("%d\n", square);
        i++;
        square += even;
    }

    return 0;
}
