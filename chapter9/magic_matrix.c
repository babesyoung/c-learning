/*
 * name: magic_matrix.c
 * purpose: printf magic_matrix
 * author: babes young
 */

#include <stdio.h>

#define DIM 99

void create_magic_matrix(int, int [DIM][DIM]);
void print_magic_matrix(int, int [DIM][DIM]);

int main(void)
{

    int dimension;

    printf("this program creates a magic square of a specified size\n");
    printf("an odd number between 1-99\n");
    printf("enter size of magic square: ");
    scanf("%d", &dimension);

    int magic_matrix[DIM][DIM] = {{0}};

    create_magic_matrix(dimension, magic_matrix);
    print_magic_matrix(dimension, magic_matrix);

    return 0;
}


void create_magic_matrix(int dimension, int magic_matrix[][DIM])
{
    int arrow = 0, column = dimension / 2,
        arrow_cache, column_cache,
        number = 1;

    magic_matrix[arrow][column] = number;

    for (int i = 1; i < (dimension * dimension); i++) {
        arrow_cache = arrow;
        column_cache = column;
        arrow -= 1;
        column += 1;

        if (arrow == -1) {
            arrow = dimension - 1;
        }
        if (column == dimension) {
            column = 0;
        }
        number++;

        if (magic_matrix[arrow][column] == 0) {
            magic_matrix[arrow][column] = number;
        } else {
            arrow = arrow_cache + 1;
            column = column_cache;
            magic_matrix[arrow][column] = number;
        }
    }
}


void print_magic_matrix(int dimension, int magic_matrix[][DIM])
{
     for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            printf("%5d", magic_matrix[i][j]);
        }
        printf("\n");
    }
}
