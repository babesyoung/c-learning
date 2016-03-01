/*
 * name: sum_double.c
 * purpose: 计算double类型的数值和
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    double sum = 0.0, number;

    printf("this program sums a series of intergers\n");
    printf("enterintegers (0 to terminate)\n");

    scanf("%lf", &number);

    while (number != 0) {
        sum += number;
        scanf("%lf", &number);
    }

    printf("the sum is : %lf\n", sum);

    return 0;
}
