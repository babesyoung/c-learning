#include <stdio.h>

int main(void)
{
    int height = 8, width = 10, length = 12;
    int volume = height * length * width;

    printf("dimensions: %dx%dx%d\n", length, width, height);
    printf("volume (cubic inches): %d\n", volume);
    printf("dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}
