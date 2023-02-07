#include <stdio.h>

void addRow(int (*q)[], int, int);
void addCol(int (*q)[], int, int);
void addAll(int (*q)[], int, int);
void arrInput(int (*q)[], int, int);

static int row = 2, col = 3;

int main()
{
    int i, j;
    int arr[row][col];
    arrInput(arr, row, col);
    addRow(arr, row, col);
    addCol(arr, row, col);
    addAll(arr, row, col);
}

void arrInput(int (*q)[col], int row, int col)
{
    int i, j;
    printf("Enter the array elements :\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &(*(*(i + q) + j)));
}

void addRow(int (*q)[col], int row, int col)
{
    int i, j, sum = 0;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
            sum = sum + *(*(q + j) + i);
        printf("\nSum of Row %d is %d", i, sum);
        sum = 0;
    }
}

void addCol(int (*q)[col], int row, int col)
{
    int i, j, sum = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            sum = sum + *(*(q + i) + j);
        printf("\nSum of Col %d is %d", i, sum);
        sum = 0;
    }
}

void addAll(int (*q)[col], int row, int col)
{
    int i, j, sum = 0;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            sum = sum + *(*(q + i) + j);
    printf("\nSum of all numbers = %d\n", sum);
}