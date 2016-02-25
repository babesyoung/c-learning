/*
 * name: upc.c
 * purpose: 校验值
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int d , i1, i2, i3, i4, i5,
        j1, j2, j3, j4, j5,
    first_num, second_num, total;

    printf("enter the first 11 digit of a UPC:\n");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5,
                                                &j1, &j2, &j3, &j4, &j5);

    first_num = d + i2 + i4 + j1 + j3 + j5;
    second_num = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_num + second_num;

    printf("check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
