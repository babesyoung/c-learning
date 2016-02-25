/*
 * name: broker.c
 * purpose: 计算股票佣金
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    float comission = 0, comission_of_competor = 0, price = 0;
    int amount = 0;

    printf("enter the amount and price of trade:\n");
    scanf("%d * %f", &amount, &price);

    float value = amount * price;

    /*佣金*/
    if (value < 2500.00f) {
        comission = 30.00f + .017f * value;
    } else if (value < 6250.00f) {
        comission = 76.00f + .0066f * value;
    } else if (value < 20000.00f) {
        comission = 100.00f + .0034 * value;
    } else if (value < 50000.00f) {
        comission = 155.00f + .0022 * value;
    } else {
        comission = 255.00f + .0009 * value;
    }
    if (comission < 39.00f)
        comission = 39.00f;

    /*竞争对手佣金*/
    if (amount < 2000) {
        comission_of_competor = amount * .3 + 33;
    } else {
        comission_of_competor = amount * .2 + 33;
    }

    printf("comission: $%.2f\n", comission);
    printf("comission_of_competor: $%.2f\n", comission_of_competor);

    return 0;
}
