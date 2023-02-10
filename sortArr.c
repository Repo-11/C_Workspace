#include <stdio.h>

int main()
{
    int arr[] = {5, 2, 8, 7, 1}, temp = 0, i, j;
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Elements of original array :\n");
    for (i = 0; i < length; i++)
        printf("%d ", arr[i]);
    for (i = 0; i < length; i++)
        for (j = i + 1; j < length; j++)
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    printf("\n");
    printf("Elements of array sorted in ascending order :\n");
    for (i = 0; i < length; i++)
        printf("%d ", arr[i]);
    return 0;
}