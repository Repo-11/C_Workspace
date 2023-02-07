#include <stdio.h>
#include <stdlib.h>

int addDigit(int num)
{
    if (num == 0)
        return 0;
    return num % 10 + addDigit(num / 10);
}

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("The sum of the digits of %d is : %d\n", num, abs(addDigit(num)));
    return 0;
}