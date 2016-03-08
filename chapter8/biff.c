/*
 * name: biff.c
 * purpose: 消息编码
 * author: babes young
 */

#include <stdio.h>
#include <ctype.h>

#define STR_LEN 100

int main(void)
{
    char str[STR_LEN + 1];
    char ch;
    int len = 0;

    printf("enter a message:\n");
    while ((ch = getchar()) != '\n') {
        str[len] = toupper(ch);
        len += 1;
    }

    for (int i = 0; i < len; i++) {
        if (str[i] == 'A') {
            str[i] = '4';
        } else if (str[i] == 'B'){
            str[i] = '8';
        } else if (str[i] == 'E') {
            str[i] = '3';
        } else if (str[i] == 'I') {
            str[i] = '1';
        } else if (str[i] == 'O') {
            str[i] = '0';
        } else if (str[i] == 'S') {
            str[i] = '5';
        }
    }

    for (int i = 0; i < len; i++) {
        printf("%c", str[i]);
    }
    printf("!!!!!!!!!!\n");

    return 0;
}
