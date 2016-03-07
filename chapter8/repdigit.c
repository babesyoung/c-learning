/*
 * name: repdigit.c
 * purpose: 输出数组中的重复数字
 * author: babesyoung
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int digit;
    bool digit_repeated[10] = {false}, first_rep = true, repeated = false;
    long n;

    printf("enter a digit:\n");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        n = n / 10;
        if (!digit_repeated[digit]) {
            digit_repeated[digit] = true;
        } else {
            repeated = true;
            if (first_rep) {
                printf("repeated digit: %d ", digit);
                first_rep = false;
            } else {
                printf("%d ", digit);
            }
        }
    }
    if (!repeated) {
        printf("no repeated digit\n");
    } else {
        printf("\n");
    }
    return 0;
}
