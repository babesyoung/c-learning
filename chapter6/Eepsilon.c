/*
 * name: Eepsilon.c
 * purpose: 输出指定精度的e
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    float e = 1.00f, term = 1.00f,
          epsilon = 0.001f;

    printf("enter the epsilon\n");
    scanf("%f", &epsilon);

    for(int i = 1; ;i++) {
        term = term / i;
        e = e + term;
        if (term < epsilon) {
            break;
        }
    }
    printf("e:%.6f\n", e);

    return 0;
}
