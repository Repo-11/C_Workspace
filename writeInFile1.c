#include <stdio.h>

int main()
{
    char ch[20];
    FILE *fp;
    fp = fopen("Z:\\AllPrograms\\C_Workspace\\writeFile1\\testWrite.txt", "a");
    if(fp == NULL)
        printf("Couldn't open the file\n");
    else
    {
        printf("Enter any text : ");
        gets(ch);
        fprintf(fp, "%s", ch);
    }
    fclose(fp);
    return 0;
}
