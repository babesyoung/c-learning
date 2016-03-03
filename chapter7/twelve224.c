/*
 * name: twelve224.c
 * purpose: 12小时制－>24小时制
 * author: babesyoung
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{

    int hour, minute;
    char ch;

    printf("enter a 12-hour time:(xx:xx)\n");
    scanf("%d:%d", &hour, &minute);

    while ((ch = getchar()) == ' ') {
            ;
    }
    switch (toupper(ch)) {
        case 'A':
            hour += 0;
            break;
        case 'P':
            hour += 12;
            break;
    }
    printf("24-hour time is: %d:%d\n", hour, minute);

    return 0;
}
