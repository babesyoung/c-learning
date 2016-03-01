/*
 * name: square2.c
 * purpose: 观察程序何时会失败
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{

    short n;

    printf("this program prints a square\n");
    printf("enter number of entries in table:\n");
    scanf("%hd", &n);

//    for (int i = 1; i <= n; i++) {
    printf("%30hd%30hd\n", n, n * n);
//    }
    return 0;
}
