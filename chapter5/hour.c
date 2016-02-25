/*
 * name: hour.c
 * purpose: 24小时制--->12小时制
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int hour= 0, minute = 0;

    printf("enter a 24-hour time:\n");
    scanf("%d:%d", &hour, &minute);

    printf("equivalent 12-hour time:");

    if (hour > 12) {
        printf(" %d:%d PM\n", hour - 12, minute);
    } else {
        printf(" %d:%d AM\n", hour, minute);
    }

    return 0;
}
