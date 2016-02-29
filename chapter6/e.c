/*
 * name: e.c
 * purpose: 输出指数e的近似值
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int numbers_term = 1;
    float e = 1.00f, term = 1.0f;

    printf("enter the term of series\n");
    scanf("%d", &numbers_term);

    for (int i = 1; i < numbers_term + 1; i++) {
        term = term / i;
        e = e + term;
    }
    printf("e:%.4f\n", e);

    return 0;
}
