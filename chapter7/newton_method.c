/*
 * name: newton_method.c
 * purpose: 牛顿法求解平方根
 * author: babesyoung
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y = 1.0, FABS = 1.0;

    printf("enter a positive number:\n");
    scanf("%lf", &x);

    while (1) {
        FABS = y - (y + x / y) / 2;
        y = (y + x / y) / 2;
        if (fabs(FABS) < 0.00001 * y) {
            printf("square root: %lf\n", y);
            return 0;
        }
    }
}
