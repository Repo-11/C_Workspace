#include <stdio.h>

int main()
{
    char ch,str[15];
    printf("Enter a string : ");
    fgets(str,15,stdin);
    printf("Enter a charater : ");
    // ch=getchar();
    // str[4]=ch;
    str[1]=getchar();
    printf("The new string is : ");
    puts(str);
    return 0;
}