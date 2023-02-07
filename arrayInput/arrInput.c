#include <stdio.h>

void input(int *arr, int size)
{
    while (size-- > 0)
        scanf("%d", arr++);
}

void display(int *arr, int size)
{
    while (size-- > 0)
        printf("%d ", *arr++);
}

int main()
{
    int num;
    printf("Enter number of elements : ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter %d elements into the array :\n", num);
    input(arr, num);
    printf("\nThe elements of the array are :\n");
    display(arr, num);
    return 0;
}