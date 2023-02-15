#include<stdio.h>

int gcd(int a, int b){
    if(a==b)
        return a;
    else if(a>b)
        gcd(a-b, b);
    else if(b>a)
        gcd(a, b-a);
}

int main(){
    int num1, num2, hcf = 0;
    printf("Enter two numbers :");
    scanf("%d %d", &num1, &num2);
    if(num1 != 0 && num2 !=0)
        hcf = gcd(num1, num2);
    printf("GCD = %d", hcf);
    return 0;
}
