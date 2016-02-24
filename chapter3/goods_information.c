/*
 * Name: goods_information.c
 * Purpose: 格式化输出商品信息
 * Author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int item_number = 0, month = 0, day = 0, year = 0;
    float unit_price = 0.0;

    printf("enter item number:\n");
    scanf("%d", &item_number);
    printf("enter unit price:\n");
    scanf("%f", &unit_price);
    printf("enter purchase date (mm/dd/yyyy):\n");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("    \t\tPrice\t\tDate\n");
    printf("%d\t\t", item_number);
    printf("$%.2f\t\t", unit_price);
    printf("%d/%d/%d\n", month, day, year);

    return 0;
}
