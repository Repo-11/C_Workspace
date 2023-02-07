#include <stdio.h>

// static int size = 5;

void display(int *arr, int size)
{
    while (size-- > 0)
        printf("%d ", *arr++);
}

void inputArr(int *arr, int size)
{
    while (size-- > 0)
        scanf("%d", &(*arr++));
}

int main()
{
    int size = 5;
    int arr[size];
    printf("Enter %d numbers :\n", size);
    inputArr(arr, size);
    printf("\nThe numbers are :\n");
    display(arr, size);
    return 0;
}