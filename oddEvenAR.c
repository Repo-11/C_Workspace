#include <stdio.h>

int main()
{
    long int ARR[10], OAR[10], EAR[10];
    int i, j = 0, k = 0, n;
    printf("Enter the size of array AR : ");
    scanf("%d", &n);
    printf("Enter the elements of the array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%ld", &ARR[i]);
        fflush(stdin);
    }
    for (i = 0; i < n; i++)
        if (ARR[i] % 2 == 0)
            EAR[j++] = ARR[i];
        else
            OAR[k++] = ARR[i];
    printf("\nThe elements of OAR are\n");
    for (i = 0; i < k; i++)
        printf("%d\n", OAR[i]);
    printf("\nThe elements of EAR are\n");
    for (i = 0; i < j; i++)
        printf("%d\n", EAR[i]);
}