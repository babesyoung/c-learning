/* Name: date.c
 * Purpose: 输出日期yyyymmdd
 * Author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int month = 0, day = 0, year = 0;

    printf("enter a date (mm/dd/yyyy):\n");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("%.4d%.2d%.2d\n", year, month, day);

    return 0;
}


