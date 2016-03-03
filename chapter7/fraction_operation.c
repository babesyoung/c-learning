/*
 * name: fraction_operation.c
 * purpose: 分数运算
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int numerator1, denominator1, numerator2, denominator2;

    printf("enter the first fraction:(xx/xx)\n");
    scanf("%d/%d", &numerator1, &denominator1);

    getchar();
    printf("enter the operation:\n");
    char ch = getchar();

    printf("enter the second fraction:\n");
    scanf("%d/%d", &numerator2, &denominator2);

    switch (ch) {
        case '+':
            printf("%d/%d\n", (numerator1 * denominator2 + numerator2 * denominator1), denominator1 * denominator2);
            break;
        case '-':
            printf("%d/%d\n", (numerator1 * denominator2 - numerator2 * denominator1), denominator1 * denominator2);
            break;
        case '*':
            printf("%d/%d\n", numerator1 * numerator2, denominator1 * denominator2);
            break;
        case '/':
            printf("%d/%d\n", numerator1 * denominator2, denominator1 * numerator2);
            break;
    }

    return 0;
}
