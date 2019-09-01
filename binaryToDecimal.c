#include <stdio.h>
#include <math.h>

int main()
{
    int blNum, decNum = 0, rem, count = 0;
    printf("Enter a boolean number :");
    scanf("%d", &blNum);
    while(blNum > 0)
    {
        rem = blNum%10;
        decNum += rem*pow(2,count++);
        //count++;
        blNum /= 10;
    }
    printf("\nThe decimal number is %d\n", decNum);
    return 0;
}
