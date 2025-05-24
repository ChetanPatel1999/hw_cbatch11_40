#include <stdio.h>
void main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++) //6
    {
        for (s = 1; s < i; s++)
        {
            printf("  ");
        }
        for (j = 1; j <= 6-i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}