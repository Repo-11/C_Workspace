#include <stdio.h>

struct Computer
{
    char arr[20];
    unsigned int var;
};

int main()
{
    struct Computer cmp;
    printf("Enter name : ");
    //gets(cpm.arr);
    scanf("%s", cmp.arr);
    printf("\nEnter age : ");
    scanf("%u", &cmp.var);
    FILE *fp = fopen("Z:\\AllPrograms\\C_Workspace\\structFile\\test.txt", "a");
    if(fp == NULL)
        printf("File couldn't open\n");
    else
    {
        fprintf(fp, "%s\n", cmp.arr);
        fprintf(fp, "%d\n", cmp.var);
    }
    fclose(fp);
    printf("\n\nData written in file successfully\n\n");
    return 0;
}
