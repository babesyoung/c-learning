/*
 * name: arrays_sum.c
 * purpose: 输出数组的行和，列和
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int array[5][5] = {{0}};
    int row_totals[5] = {0}, column_totals[5] = {0};

    for (int i = 0; i < 5; i++) {
        printf("enter a row %d\n", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    //row_totals
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            row_totals[i] += array[i][j];
        }
    }

    //column_totals
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            column_totals[i] += array[j][i];
        }
    }

    printf("row totals:");
    for (int i = 0; i < 5; i++) {
        printf("%d ", row_totals[i]);
    }
    printf("\n");

    printf("column totals:");
    for (int i = 0; i < 5; i++) {
        printf("%d ", column_totals[i]);
    }
    printf("\n");

    return 0;
}
