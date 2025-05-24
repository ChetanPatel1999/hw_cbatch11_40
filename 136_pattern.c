#include <stdio.h>
void main()
{
    int i, j, s;
    for (i = 1; i <= 7; i++) //1
    {
        for (s = 7; s > i; s--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if(j==1 || i==7 || j==i)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}