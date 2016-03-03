/*
 * name: sizeof.c
 * purpose: 观察 int, float等存储空间字节
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{

    printf("size of int:%zu\n", sizeof(int));
    printf("size of short:%zu\n", sizeof(short));
    printf("size of long:%zu\n", sizeof(long));
    printf("size of float:%zu\n", sizeof(double));
    printf("size of double:%zu\n", sizeof(long double));

    return 0;
}
