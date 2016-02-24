/*
 * Name: isbn.c
 * Purpose: 分解ISBN并输出
 * Author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int gsi = 0, group_identifier = 0, publisher_identifier = 0, title_identifier = 0, check_digit = 0;

    printf("enter ISBN:(XXX-XXX-XXX-XXX-XXX) \n");
    scanf("%d-%d-%d-%d-%d", &gsi, &group_identifier, &publisher_identifier, &title_identifier, &check_digit);

    printf("GSI prefix: %d\n", gsi);
    printf("Group identifier: %d\n", group_identifier);
    printf("Publisher identifier: %d\n", publisher_identifier);
    printf("Item number: %d\n", title_identifier);
    printf("Check digit: %d\n", check_digit);

    return 0;
}
