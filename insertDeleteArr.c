#include <stdio.h>

void readArray(int a[]);
void displayArray(int a[]);
void insert(int a[], int, int);
void del(int a[], int);
int size;

int main()
{
    int a[15], ele, pos;
    printf("\n Enter size of the array :");
    scanf("%d", &size);
    printf("\nEnter the array elements :\n");
    readArray(a);
    printf("\nThe array elements are :\n");
    displayArray(a);
    printf("\nEnter element to insert : ");
    scanf("%d", &ele);
    printf("\nEnter Position to insert :");
    scanf("%d", &pos);
    insert(a, ele, pos);
    printf("\nArray after insertion :\n");
    displayArray(a);
    printf("\nArray after deletion :\n");
    del(a, pos);
    displayArray(a);
    return 0;
}

void readArray(int a[])
{
    int i;
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
}

void displayArray(int a[])
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d\n", a[i]);
}

void insert(int a[], int element, int index)
{
    int i;
    for (i = size; i >= index; i--)
        a[i] = a[i - 1];
    a[index-1]=element;
    size++;
}

void del(int a[], int index)
{
    int i;
    for (i = index-1; i < size; i++)
        a[i] = a[i + 1];
    size--;
}