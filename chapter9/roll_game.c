/*
 * name: roll_game.c
 * purpose: roll game
 * author: babes young
 */

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    int win = 0, lose = 0;
    char flag = 'n';

    srand((unsigned) time(NULL));

    do {
        if (play_game()) {
            win++;
            printf("you win!\n");
        } else {
            lose++;
            printf("you lose!\n");
        }

        printf("play again(y or n): ");
        scanf(" %c", &flag);//scanf 中的 space 如果没有的话，会出现 flag == '\n'

    } while (flag == 'y');
    printf("you win %d\tlose %d\n", win, lose);

    return 0;
}


int roll_dice(void)
{
    int num1, num2;

    num1 = (rand() % 6) + 1;
    num2 = (rand() % 6) + 1;

    int number = num1 + num2;
    return number;
}

bool play_game(void)
{
    int point, roll;

    point = roll_dice();
    printf("you rolled: %d\n", point);
    if (point == 7 || point == 11) {
        return true;
    } else if (point == 2 || point == 3 || point == 11) {
        return false;
    } else {
        printf("your point is %d\n", point);
        for (;;) {
            roll = roll_dice();
            if (roll == point) {
                printf("you rolled: %d\n", roll);
                return true;
            } else if (roll == 7){
                printf("you rolled: %d\n", roll);
                return false;
            } else {
                printf("you rolled: %d\n", roll);
                continue;
            }
        }
    }

}
