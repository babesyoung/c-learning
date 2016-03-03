/*
 * name: name.c
 * purpose: 依据 姓.名字首字母 的格式输出
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    char name, ch;

    printf("enter a name:\n");

    // 跳过 first name 之前的 space
    while ((name = getchar()) == ' ') {
        ;
    }
    //跳过 first name 剩余的字母
    while(getchar() != ' ' ) {
        ;
    }
    //跳过 last name 之前的 space
    while ((ch = getchar()) == ' ') {
        ;
    }
    putchar(ch);
    //输出 last name
    while ((ch = getchar()) != '\n') {
        putchar(ch);
    }

    putchar(',');
    putchar(name);
    putchar('.');
    putchar('\n');

    return 0;
}
