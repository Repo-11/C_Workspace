#include <stdio.h>

void convert(int num)
{
    if(num != 1)
        convert(num/2);
    printf("%d", num%2);
}

int main()
{
    int num;
    printf("Enter a number to convert into binary : ");
    scanf("%d", &num);
    printf("\nThe binary of %d is :", num);
    convert(num);
    printf("\n");
    //return 0;
    //printf("\n\n%d",EXIT_FAILURE);
    return EXIT_SUCCESS;
}
