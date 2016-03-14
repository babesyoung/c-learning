/*
 * name: anagrams.c
 * purpose: 判断两个单词是否为变位词
 * author: babesyoung
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int f_index = 0, s_index = 0,
        anagrams[26] = {0};

    printf("enter first word: ");
    while ((ch = getchar()) != '\n') {
        f_index = (int) (tolower(ch) - 'a');
        anagrams[f_index]++;
    }

    printf("enter second word: ");
    while ((ch = getchar()) != '\n') {
        s_index = (int) (tolower(ch) - 'a');
        anagrams[s_index]--;
    }

    for (int i = 0; i < 26; i++) {
        if (anagrams[i] == 0) {
            if (i == 25) {
                printf("the words are anagrams\n");
            }
        } else {
            printf("the words are not anagrams\n");
            break;
        }
    }

    return 0;
}
