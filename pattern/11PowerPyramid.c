#include <stdio.h>

int fact(int num){
    if(num==0)
        return 1;
    return num*fact(num-1);
}

int ncr(int c, int r){
    return fact(c)/(fact(r)*fact(c-r));
}

int main()
{
    int i, j, n = 5;
    for (i = 0; i <= n; i++)
    {
        for (j = n - i; j > 0; j--)
            printf("  ");
        for(j=0; j<=i;j++)
            printf("%d   ", ncr(i,j));
        printf("\n");
    }
    return 0;
}