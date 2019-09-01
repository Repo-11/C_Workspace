#include <stdio.h>

int main()
{
    int var1, var2, var3;
    int var4 = 'A';
    printf("Enter 3 numbers :\n");
    scanf("%d %d %d", &var1, &var2, &var3);
    printf("\n%d", var3);  //Prints var3
    printf("\n%c", var4); // Prints A
    /* if(var1 > var2)
        if(var1 > var3)
            printf("\n%d is greatest\n", var1);
        else
            printf("\n%d is greatest\n", var3);
    else if(var2 > var3)
        printf("\n%d is greatest\n", var2);
    else
        printf("\n%d is greatest\n", var3);
    return 0; */

    (var1 > var2)?((var1 > var3)? printf("\n%d is greatest\n", var1):printf("\n%d is greatest\n", var3)) : ((var2 > var3)? printf("\n%d is greatest\n", var2): printf("\n%d is greatest\n", var3));

}
