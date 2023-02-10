#include<stdio.h>

int main(){
    int i, num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("%d", num);
    for(i = 2; i<= num-1; i++)
        if(num % i == 0){
            printf("\nNot Prime");
            break;
        }
        else{
            printf("\nPrime");
            break;
        }
    return 0;
}