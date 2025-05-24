#include <stdio.h>
void main()
{
    int i, j, s;
      for (i = 1; i <= 4; i++) //6
    {
        for (s = 1; s < i; s++)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++) // 1
    {
        for (s = 5; s > i; s--)
        {
            if(i!=1)
            {
                printf(" ");
            }
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
            if(i==1)
            {
                printf("* * * *");
            }
        }
        printf("\n");
    }
}