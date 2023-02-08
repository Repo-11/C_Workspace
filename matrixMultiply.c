#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1, n1, m2, n2, i, j, k = 0;
    printf("Enter size of matrix 1 : ");
    scanf("%d %d", &m1, &n1);
    printf("Enter size of matrix 2 : ");
    scanf("%d %d", &m2, &n2);
    if (n1 != m2)
    {
        printf("\nMatrix cannot be multiplied");
        exit(1);
    }
    int arr1[m1][n1], arr2[m2][n2];
    int arr3[m1][n2];
    printf("Enter elements into array 1 :\n");
    for (i = 0; i < m1; i++)
        for (j = 0; j < n1; j++)
            scanf("%d", &arr1[i][j]);
    printf("Enter elements into array 2 :\n");
    for (i = 0; i < m2; i++)
        for (j = 0; j < n2; j++)
            scanf("%d", &arr1[i][j]);
    for (i = 0; i < m1; i++)
        for (j = 0; j < n2; j++){
            arr3[i][j] = 0;
            for (k = 0; k < n2; k++)
                arr3[i][j] += arr1[i][k] * arr2[k][j];
        }
    printf("The product matrices is :\n");
    for (i = 0; i < m1; i++){
        for (j = 0; j < n2; j++)
            printf("%d ", arr3[i][j]);
        printf("\n");
    }
    return 0;
}