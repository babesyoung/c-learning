/*
 * name: month.c
 * purpose: 输出月份
 * author: babesuyoung
 */

#include <stdio.h>

int main(void)
{
    int days_one_month = 30, starting_day = 1;

    printf("enter number of days in month:\n");
    scanf("%d", &days_one_month);

    printf("enter starting day of the week(1 = Sun, 7 = Sat):\n");
    scanf("%d", &starting_day);

    for (int i = 1; i < days_one_month + starting_day; i++) {
        if (i >= starting_day) {
            if (i % 7 == 0) {
                printf("%2d\n", i + 1 - starting_day);
            } else {
                printf("%2d ", i + 1 - starting_day);
            }
        } else {
            printf("   ");
        }
    }
    printf("\n");

    return 0;
}
