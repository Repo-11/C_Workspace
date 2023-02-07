#include <stdio.h>

void display(int arr[5])
{
    for (int i = 0; i < 5; i++)
        printf("%d ", *(i + arr));
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    display(arr);
    return 0;
}