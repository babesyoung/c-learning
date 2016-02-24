/*
 * Name: magic_square.c
 * Purpose: 幻方
 * Author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int num_0, num_1, num_2, num_3, num_4, num_5, num_6, num_7, num_8,
        num_9, num_10, num_11, num_12, num_13, num_14, num_15;

    printf("enter the number from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
            &num_0, &num_1, &num_2, &num_3, &num_4, &num_5, &num_6, &num_7, &num_8, &num_9,
            &num_10, &num_11, &num_12, &num_13, &num_14, &num_15);

    printf("%d\t%d\t%d\t%d\n", num_0, num_1, num_2, num_3);
    printf("%d\t%d\t%d\t%d\n", num_4, num_5, num_6, num_7);
    printf("%d\t%d\t%d\t%d\n", num_8, num_9, num_10, num_11);
    printf("%d\t%d\t%d\t%d\n", num_12, num_13, num_14, num_15);

    printf("row sums: %d %d %d %d\n",
            num_0 + num_1 + num_2 + num_3,
            num_4 + num_5 + num_6 + num_7,
            num_8 + num_9 + num_10 + num_11,
            num_12 + num_13 + num_14 + num_15);

    printf("column sums: %d %d %d %d\n",
            num_0 + num_4 + num_8 + num_12,
            num_1 + num_5 + num_9 + num_13,
            num_2 + num_6 + num_10 + num_14,
            num_3 + num_7 + num_11 + num_15);

    printf("diagonal sums: %d %d\n",
            num_0 + num_5 + num_10 + num_15,
            num_3 + num_6 + num_9 + num_12);

    return 0;
}
