/*
 * names: english_number.c
 * purpose : 输出数字的英文表示
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int number = 10, decade = 1, unit = 0;

    printf("enter a 2-digit number:\n");
    scanf("%d", &number);

    decade = number / 10;
    unit = number % 10;

    printf("you entered the number ");
    switch (decade) {
        case 9:
            printf("ninety");
            break;
        case 8:
            printf("eighty");
            break;
        case 7:
            printf("seventy");
            break;
        case 6:
            printf("sixty");
            break;
        case 5:
            printf("fifty");
            break;
        case 4:
            printf("forty");
            break;
        case 3:
            printf("thirty");
            break;
        case 2:
            printf("twenty");
            break;
        case 1:
            switch (unit) {
                case 0:
                    printf("ten\n");
                    break;
                case 1:
                    printf("eleven\n");
                    break;
                case 2:
                    printf("twelve\n");
                    break;
                case 3:
                    printf("thirteen\n");
                    break;
                case 4:
                    printf("fourteen\n");
                    break;
                case 5:
                    printf("fifteen\n");
                    break;
                case 6:
                    printf("sixteen\n");
                    break;
                case 7:
                    printf("seventeen\n");
                    break;
                case 8:
                    printf("eighteen\n");
                    break;
                case 9:
                    printf("nineteen\n");
                    break;
            }
            break;
    }

    if (decade != 1) {
        switch (unit) {
            case 9:
                printf("-nine\n");
                break;
            case 8:
                printf("-eight\n");
                break;
            case 7:
                printf("-seven\n");
                break;
            case 6:
                printf("-six\n");
                break;
            case 5:
                printf("-five\n");
                break;
            case 4:
                printf("-four\n");
                break;
            case 3:
                printf("-three\n");
                break;
            case 2:
                printf("-two\n");
                break;
            case 1:
                printf("-one\n");
                break;
            default:
                printf("\n");
                break;
        }
    }

    return 0;
}
