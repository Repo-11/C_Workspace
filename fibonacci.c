#include<stdio.h>

int fibo(int num){
    if(num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return fibo(num-1)+fibo(num-2);
}

int main(){
    int i,terms;
    printf("Enter number of terms : ");
    scanf("%d", &terms);
    for(i = 0; i<terms; i++)
        printf("%d ", fibo(i));
    return 0;
}