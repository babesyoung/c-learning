/*
 * name: reverse.c
 * purpose: reverse sentence
 * author: babes young
 */

#include <stdio.h>

#define N 100

int main(void)
{
    int sentence[N], i = 0;

    printf("enter a message:\n");
    char ch = getchar();
    while (ch != '\n') {
        sentence[i++] = ch;
        ch = getchar();
    }

    for (int j = (i - 1); j >= 0; j--) {
        printf("%c", sentence[j]);
    }
    printf("\n");

    return 0;
}
