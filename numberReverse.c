#include <stdio.h>

int main()
{
    int rem, origNum, revNum = 0;
    printf("Enter a number :");
    scanf("%d", &origNum);
    while(origNum > 0)
    {
        rem = origNum%10;
        revNum = revNum*10 + rem;
        origNum /= 10;
    }
    printf("\nReversed number is %d\n", revNum);
    //printf("Hello world!\n");
    return 0;
}
