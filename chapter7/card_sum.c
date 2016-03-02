/*
 * name: card_sum.c
 * purpose: 依据 1=AEILNORSTU,2=DG,3=BCMP,4=FHVWY,5=K,8=JX,10=QZ
 * author: babesyoung
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int sum = 0;
    printf("enter a word\n");

    /*不知道该怎么选用'\r'作为结束符！！！！！！！！*/
    while ((ch = getchar()) != '!') {
        switch (toupper(ch)) {
            case 'A': case 'E': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U': case 'I':
                sum += 1;
                break;
            case 'D': case 'G':
                sum += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                sum += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                sum += 4;
                break;
            case 'K':
                sum += 5;
                break;
            case 'J': case 'X':
                sum += 8;
                break;
            case 'Q': case 'Z':
                sum += 10;
                break;
        }
    }
    printf("sum: %d\n", sum);

    return 0;
}
