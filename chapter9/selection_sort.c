/*
 * name: selection_sort.c
 * purpose: sort
 * author: babesyoung
 */

#include <stdio.h>

void selection_sort(int [], int);

int main(void)
{
    int number[3] = {1, 2, 3};

    printf("enter a array(3):\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &number[i]);
    }

    selection_sort(number, 3);

    for (int i = 0; i < 3; i++) {
        printf("%d\n", number[i]);
    }
    return 0;
}

void selection_sort(int a[], int len)
{
    if (len == 1) {
        return;
    }

    int max = 0, index = 0;
    for (int i = 0; i < len; i++) {
        if (a[i] >= max) {
            max = a[i];
            index = i;
        }
    }
    a[index] = a[len - 1];
    a[len - 1] = max;

    selection_sort(a, len - 1);
}
