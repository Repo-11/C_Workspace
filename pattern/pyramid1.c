#include<stdio.h>

int main(){
    int i,j,count=1;
    for(i=1;i<=4;i++)
    {
        for(j=4-i;j>=1;j--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%d ",count++);
        printf("\n");
    }
    return 0;
}