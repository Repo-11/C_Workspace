#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *name;
    name = malloc(1*sizeof(char));
    strcpy(name, "Hello World");
    printf("Size of name is : %d\n", sizeof(name));
    //name = realloc(20*sizeof(char));
    printf("\n%s\n", name);
    free(name);
    return 0;
}
