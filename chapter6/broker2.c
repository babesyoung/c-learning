/*
 * name: broker2.c
 * purpose: 计算每笔股票交易的佣金
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    float trade = 0, commission = 0;

//    for(;;){
        printf("enter the amount and price of trade:\n");
        scanf("%f", &trade);

//        if (trade != 0) {
            /*佣金*/
            if (trade < 2500.00f) {
                commission = 30.00f + .017f * trade;
            } else if (trade < 6250.00f) {
                commission = 76.00f + .0066f * trade;
            } else if (trade < 20000.00f) {
                commission = 100.00f + .0034 * trade;
            } else if (trade < 50000.00f) {
                commission = 155.00f + .0022 * trade;
            } else {
                commission = 255.00f + .0009 * trade;
            }
            if (commission < 39.00f) {
                commission = 39.00f;
            }
            printf("commission: %.2f\n", commission);
//        } else {
//            return 0;
//        }
//    }
}
