/*
 * name: phone.c
 * purpose: 按照 2=ABC，3=DEF，4=GFI，5=JKL，6=MNO，7=PRS，8=TUV，9=WXY 的编码方式输出
 * author: babesyoung
 */

#include <stdio.h>

#define STRLEN 100

int main(void)
{
    char origin[STRLEN + 1] = {' '},
         number[STRLEN + 1] = {' '},
         ch;
    int index = 0;
    printf("enter a phone number\n");

    while ((ch = getchar()) != '\n') {
        origin[index] = ch;
        switch (ch) {
            case 'A': case 'B': case 'C':
                number[index] = '2';
                break;
            case 'D': case 'E': case 'F':
                number[index] = '3';
                break;
            case 'G': case 'H': case 'I':
                number[index] = '4';
                break;
            case 'J': case 'K': case 'L':
                number[index] = '5';
                break;
            case 'O': case 'M': case 'N':
                number[index] = '6';
                break;
            case 'P': case 'S': case 'R':
                number[index] = '7';
                break;
            case 'U': case 'T': case 'V':
                number[index] = '8';
                break;
            case 'W': case 'X': case 'Y':
                number[index] = '9';
                break;
            default:
                number[index] = ch;
        }
        index += 1;
    }

    printf("in numeric form:\n");
    for (int i = 0; i < index + 1; i++) {
        printf("%c", number[i]);
    }
    printf("\n");

    return 0;
}
