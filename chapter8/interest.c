/*
 * name: interest.c
 * purpose: 计算不同利率下的投资收益
 * author: babesyoung
 */

#include <stdio.h>

#define NUM_RATE ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100

int main(void)
{
    int start_rate, num_years;
    double value[5];

    printf("enter interest rate:\n");
    scanf("%d", &start_rate);
    printf("enter number of years:\n");
    scanf("%d", &num_years);

    printf("\nYears");
    for (int i = 0; i < NUM_RATE; i++) {
        printf("%6d%", NUM_RATE + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (int i = 1; i < num_years + 1; i++) {
        printf("%3d\t", i);
        for (int i = 0; i < NUM_RATE; i++) {
            value[i] = (1 + (start_rate + i) / 100) * value[i];
            printf("%7.2f\n", value[i]);
        }
        printf("\n");
    }
    return 0;
}
