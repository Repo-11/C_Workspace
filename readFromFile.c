#include <stdio.h>

int main()
{
    FILE *fp;
    // char ch;
    fp = fopen("Z:\\AllPrograms\\C_Workspace\\structFile\\test.txt","r");
    do
    {
        // ch = fgetc(fp);
        printf("%c", fgetc(fp));
    }while(fgetc(fp) != EOF);
    fclose(fp);
    return 0;
}
