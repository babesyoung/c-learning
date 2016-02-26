/*
 * name: max_min.c
 * purpose: 返回4个数字中的最大值，最小值
 * author: babeyoung
 */

#include <stdio.h>

int main(void)
{
    int num_1 = 0, num_2 = 0, num_3 = 0, num_4 = 0,
        max = 0, min = 0, max_1 = 0, min_1 = 0;

    printf("enter 4 different number:\n");
    scanf("%d %d %d %d", &num_1, &num_2, &num_3, &num_4);

    if (num_1 >= num_2) {
        max = num_1;
        min = num_2;
    } else {
        max = num_2;
        min = num_1;
    }

    if (num_3 >= num_4) {
        max_1 = num_3;
        min_1 = num_4;
    } else {
        max_1 = num_4;
        min_1 = num_3;
    }

    if (max < max_1) {
        max = max_1;
    }

    if (min > min_1) {
        min = min_1;
    }

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}
