/*
 * Name: volume.c
 * Purpose: 计算球体体积
 * Author: babesyoung
 */

#include <stdio.h>

#define PI 3.14

int main(void)
{
    int radius = 10;
    printf("请输入球体半径:\n");
    scanf("%d", &radius);

    float volume = (4.0f / 3.0f) * PI * radius * radius * radius;

    printf("volume: %f\n", volume);

    return 0;
}
