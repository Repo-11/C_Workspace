#include <stdio.h>

int main()
{
    int i, j;
    for (i = 71; i >= 65; i--)
    {
        for (j = 65; j <= i; j++)
            printf("%c ", j);
        for (j = 71 - i; j > 0; j--)
            printf("  ");
        for (j = 1; j <= 70 - i && i < 70; j++)
            printf("  ");
        if (i == 71)
            for (j = i - 1; j >= 65; j--)
                printf("%c ", j);
        else
            for (j = i; j >= 65; j--)
                printf("%c ", j);
        printf("\n");
    }
    return 0;
}