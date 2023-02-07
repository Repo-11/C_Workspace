#include <stdio.h>
int temp;

void main()
{
    printf("Swapping of numberz :\n");
    register int num1 = 10, num2 = 20;
    printf("num1 = %d and num2 = %d", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nAfter Swapping\n");
    {
        printf("num1=%d and num2=%d", num1, num2);
    }
}