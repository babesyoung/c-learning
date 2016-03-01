/*
 * name: char2num.c
 * purpose: 按照2=ABC，3=DEF，4=GFI，5=JKL，6=MNO，7=PRS，8=TUV，9=WXY
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    char ch;

    printf("enter the phone number\n");

    /*用enter'\r'代替Z无法结束，不懂*/
    while ((ch = getchar()) != 'Z') {
        switch (ch) {
            case 'A': case 'B': case 'C':
                printf("2");
                break;
            case 'D': case 'E': case 'F':
                printf("3");
                break;
            case 'G': case 'H': case 'I':
                printf("4");
                break;
            case 'J': case 'K': case 'L':
                printf("5");
                break;
            case 'O': case 'M': case 'N':
                printf("6");
                break;
            case 'P': case 'S': case 'R':
                printf("7");
                break;
            case 'U': case 'T': case 'V':
                printf("8");
                break;
            case 'W': case 'X': case 'Y':
                printf("9");
                break;
            default:
                printf("%c", ch);
        }
    }

    return 0;
}
