/*
 * name: square24.c
 * purpose: 输出24次，暂停。用户决定是否继续
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int n;
    char ch;
    printf("this program prints a table of square\n");
    printf("enter number of entries in table\n");
    scanf("%d", &n);
    /*!!!!!!去除键入的enter键的影响*/
    ch = getchar();

    for (int i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);

        if((i % 24) == 0) {
            printf("press enter to continue...");

            while (getchar() == '\r') {
                break;
            }
        }
    }
}
