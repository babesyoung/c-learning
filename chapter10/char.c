#include <stdio.h>

int main(void)
{
    char ch_1, ch_2;
    printf("enter\n");
    scanf("%c %c", &ch_1, &ch_2);
    printf("sum: %d\n", (int) (ch_1 - 48 + ch_2 - 48));
    return 0;
}
