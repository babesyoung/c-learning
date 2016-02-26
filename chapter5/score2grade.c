/*
 * name: score2grade.c
 * purpose: 分数制--->等级制
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int score = 0, grade = 0;

    printf("enter numerical score:\n");
    scanf("%d", &score);

    if (score > 100 || score < 0) {
        printf("WRONG\n");
    } else {
        grade = score / 10;
        switch (grade) {
        case 9: case 10:
            printf("letter grade: A\n");
            break;
        case 8:
            printf("letter grade: B\n");
            break;
        case 7:
            printf("letter grade: C\n");
            break;
        case 6:
            printf("letter grade: D\n");
            break;
        default:
            printf("letter grade: F\n");
            break;
        }
    }

    return 0;
}
