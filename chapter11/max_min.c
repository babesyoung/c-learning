/*
 * name: max_min.c
 * purpose: max min
 * author: babes young
 */

#include <stdio.h>

#define N 10

void max_min(int [], int, int *, int *);

int main(void)
{
    int a[N], max, min;

    printf("enter %d numbers\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    max_min(a, N, &max, &min);

    printf("largest: %d\n", max);
    printf("smallest: %d\n", min);

    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    *max = *min = a[0];

    for (int i = 0; i < n; i++) {
        if (a[i] > *max) {
            *max = a[i];
        } else if (a[i] < *min) {
            *min = a[i];
        }
    }
}
