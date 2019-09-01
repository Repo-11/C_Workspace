#include <stdio.h>

int main() {
    int arr1[2][2], arr2[2][2], i, j;

    //Take input
    for(i=0; i<2; i++)
        for(j=0; j<2; j++) {
            printf("\nEnter value for arr1[%d][%d]:", i, j);
            scanf("%d", &arr1[i][j]);
            printf("\nEnter value for arr2[%d][%d]:", i, j);
            scanf("%d", &arr2[i][j]);
        }

    //Addition
    for(i=0; i<2; i++)
        for(j=0; j<2; j++) {
            arr1[i][j] = arr1[i][j] + arr2[i][j];   // x += y means x = x + y
            printf(" %d", arr1[i][j]);
        }

    //Display
    printf("\n\nThe sum is :\n");
    for(i=0; i<2; i++) {
        for (j = 0; j < 2; j++)
            printf(" %d  ", arr1[i][j]);
        printf("\n");
    }

    return 0;
}
