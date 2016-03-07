/*
 * name: repeated1.c
 * purpose: 显示数字重复的次数
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int digit, digit_occurrence[10] = {0};
    long n;

    printf("enter a digit:\n");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_occurrence[digit]++;
        n = n / 10;
    }

    printf("Digit:\t\t");
    for (int i = 0; i < 10; i++) {
        printf("%2d", i);
    }
    printf("\nOccurrences:\t");
    for (int i = 0; i < 10; i++) {
        printf("%2d", digit_occurrence[i]);
    }
    printf("\n");

    return 0;
}
