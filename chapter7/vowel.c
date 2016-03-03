/*
 * name: vowel.c
 * purpose: 计算字符串中元音字母的个数
 * author: babesyoung
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int num = 0;

    printf("enter a sentence:\n");

    while ((ch = toupper(getchar())) != '.') {
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            num ++;
        }
    }

    printf("your sentence contains %d vowels.\n", num);

    return 0;
}
