/*
 * name: anagrams.c
 * purpose: 判断两个单词是否为变位词
 * author: babes young
 */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int []);
bool equal_array(int [], int []);

int main(void)
{
    int count1[26] = {0},
        count2[26] = {0};

    read_word(count1);
    read_word(count2);

    if (equal_array(count1, count2)) {
        printf("the words are anagrams.\n");
    } else {
        printf("the words are not anagrams\n");
    }

    return 0;
}


void read_word(int count[26])
{
    int index = 0;
    char ch;

    printf("enter your word: ");
    while ((ch = getchar()) != '\n') {
        index = (int) (tolower(ch) - 'a');
        count[index]++;
    }

}


bool equal_array(int count1[], int count2[])
{
    for (int i = 0; i < 26; i++) {
        if (count1[i] == count2[i]) {
            if (i == 25) {
                return true;
            }
        } else {
            return false;
        }
    }
}//anagrams.c:57:1: warning: control may reach end of non-void function [-Wreturn-type]
