#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p, sum = 0, i, n=5;
    // p = (int *)calloc(n,sizeof(int));
    p = (int *)calloc(n,4);
    printf("Enter %d numbers : ", n);
    for(i=0; i<5; i++){
        scanf("%d", p+i);
        sum = sum + *(p+i);
    }
    printf("\nSum = %d", sum);
    printf("\nThe numbers are :\n");
    for(i = 0; i<5; i++)
        printf("%d ", *p++);
    return 0;
}