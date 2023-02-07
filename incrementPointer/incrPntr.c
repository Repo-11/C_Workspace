#include <stdio.h>

int main()
{
    char s[] = "HelloWorld";
    char t[25];
    char *ss, *tt;
    ss = s;
    tt = t;
    while (*ss != '\0')
        *tt++ = *ss++;
    *tt = '\0';
    printf("%s\n", t);
    return 0;
}