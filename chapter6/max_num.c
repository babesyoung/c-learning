/*
 * name: max_num.c
 * purpose: 输出一组数的最大值
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    float num = 0.0f, max = 0.0f;

    for (;;) {
        printf("enter a number(0 to terminate):");
        scanf("%f", &num);
        if (num != 0) {
            max = max > num ? max : num;
        } else {
            printf("the largest number entered is: %.2f\n", max);
            return 0;
        }
    }
}
