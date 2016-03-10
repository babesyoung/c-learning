/*
 * name: sentence.c
 * purpose: 颠倒句子中单词顺序
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    char sentence[100] = {' '},
         ch = ' ';
    int start_space = 0,
        end_index = 0,
        index = 1;

    printf("enter a sentence\n");

    while ((ch = getchar()) != '\n') {
        sentence[index] = ch;
        index += 1;
    }
    end_index = index - 1;
    sentence[index] = sentence[end_index];
    sentence[end_index] = ' ';
    for (int i = end_index; i >= 0; i--) {
        if (sentence[i] == ' ') {
            start_space = i;
            for (int j = start_space + 1; j < end_index + 1; j++) {
                printf("%c", sentence[j]);
            }
            end_index = start_space;
        }
    }
    printf("%c\n", sentence[index]);
    return 0;
}
