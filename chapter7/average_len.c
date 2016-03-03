/*
 * name: average_len.c
 * purpose: 计算句子的平均词长
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    printf("enter the sentence:\n");

    char ch;
    float  len = 0.0f, num = 1.0f;
    while ((ch = getchar()) != '.') {
        switch (ch) {
            case ' ':
                num += 1;
                break;
            default:
                len += 1;
        }
    }
    printf("%.1f\n", len / num);

    return 0;
}
