#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col, i, j;
    double avg, allSum = 0, collSum, rowSum;
    printf("Enter number of rows and columns respectively :\n");
    scanf("%d %d", &row, &col);
    double(*q)[col];
    q = (double(*)[])calloc(row * col, 8);
    printf("\nEnter %d element :\n", row * col);
    // Take input into the matrix
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%lf", (*(q + i) + j));
    // Add elements of each row as well as all elements of the matrix but display only for row
    for (i = 0; i < row; i++)
    {
        rowSum = 0;
        for (j = 0; j < col; j++)
            rowSum += *(*(q + i) + j);
        allSum += rowSum;
        printf("\nSum of elements of row %d = %.3lf", i + 1, rowSum);
    }
    // Add and display elements of each column
    for (i = 0; i < col; i++)
    {
        collSum = 0;
        for (j = 0; j < row; j++)
            collSum += *(*(q + j) + i);
        printf("\nSum of elements of column %d = %.3lf", i + 1, collSum);
    }
    printf("\nSum of all elements = %.3lf\n", allSum);
    avg = (double)(allSum / (row * col));
    printf("Average = %.3lf\n", avg);
    return 0;
}