#include <stdio.h>
#include<stdlib.h>

struct train
{
    int tno;
    char tname[15];
};

int main()
{
    struct train *ptr;
    int i, noRecord;
    printf("Enter number of records : ");
    scanf("%d", &noRecord);
    ptr = (struct train *)malloc(noRecord*sizeof(struct train));
    for (i = 0; i < noRecord; i++){
        printf("Enter train name and number :\n");
        scanf("%s %d", (ptr + i)->tname, &(ptr + i)->tno);
    }
    printf("The train details are :\n");
    for(i = 0; i<noRecord; i++)
        printf("%s\t%d\n", (ptr + i)->tname, (ptr + i)->tno);
    return 0;
}