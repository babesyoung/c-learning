#include <stdio.h>

int sum_array(int [], int);

int main(void)
{
    int array[3] = {1, 2, 3};

    printf("sum: %d\n", sum_array(array, 3));

    return 0;
}

int sum_array(int a[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    return sum;
}
