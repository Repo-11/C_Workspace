#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int row, col = 20, i, j;
    printf("Enter number of names to comapare : ");
    scanf("%d", &row);
    // char(*name)[col] = (char (*)[])calloc(row * col, 1);
    char temp[col], name[row][col];
    printf("Enter names : ");
    for (i = 0; i < row; i++)
        gets(name[i]);
    for (i = 0; i < row; i++)
        for (j = 0; j < row; j++)
            if(strcmp(*(name + i), *(name + j) > 0)){
                strcpy(temp, *(name + i));
                strcpy(*(name + i), *(name + j));
                strcpy(*(name + j), temp);
            }
    printf("The names are :\n");
    for(i=0; i<row; i++)
        puts(*(name+i));
    free(name);
    return 0;
}