#include<stdio.h>

int main(){
    int a = 10, *x=&a;
    short b = 12;
    long c = 14;
    long double d = 2.999999;
    double e = 2.999999;
    printf("\n%ld\n",sizeof(a));
    printf("%lu\n",sizeof(b));
    printf("%ld\n",sizeof(c));
    printf("%ld %Lf\n",sizeof(d),d);
    printf("%ld %lf\n",sizeof(e),e);
    return 0;
}