/*
 * name: wind.c
 * purpose: 蒲福风力等级
 * author: babesyoung
 */

#include <stdio.h>

int main(void)
{
    int wind_speed = 0;

    printf("enter the wind speed:\n");
    scanf("%d", &wind_speed);

    int flag = 0;

    if (wind_speed < 1) {
        flag = 0;
    } else if (wind_speed < 4){
        flag = 1;
    } else if (wind_speed < 28) {
        flag = 2;
    } else if (wind_speed < 48) {
        flag = 3;
    } else if (wind_speed < 64){
        flag = 4;
    } else {
        flag =5;
    }

    switch (flag) {
        case 0:
            printf("Calm\n");
            break;
        case 1:
            printf("Light air\n");
            break;
        case 2:
            printf("Breeze\n");
            break;
        case 3:
            printf("Gale\n");
            break;
        case 4:
            printf("Storm\n");
            break;
        case 5:
            printf("Hurricane\n");
            break;
    }

    return 0;
}
