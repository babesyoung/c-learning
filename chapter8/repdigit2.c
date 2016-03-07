/*
 * name: repdigit2.c
 * purpose: 允许用户多次输出
 * author: babesyoung
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool digit_repeated[10] = {false};
    int digit;
    long n;

    while (1) {
        printf("enter a number:\n");
        scanf("%ld", &n);
        if (n != 0) {
            while (n > 0) {
                digit = n % 10;
                if (digit_repeated[digit]) {
                        break;
                }
                digit_repeated[digit] = true;
                n = n / 10;
            }
            if (n > 0) {
                printf("repeated digit\n");
            } else {
                printf("no repeated digit\n");
            }

            for (int i = 0; i < 10; i++) {
                digit_repeated[i] = false;
            }
        } else {
             break;
        }
    }

    return 0;
}
