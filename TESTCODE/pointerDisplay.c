#include <stdio.h>

int main()
{
    int a = 10;
    int *b = &a;
    printf("\n%p \n%d\n",&a,a);
    printf("\n%p \n%d\n",b,a);
    // printf("\n%x \n%d\n",&a,a);
    return 0;
}
