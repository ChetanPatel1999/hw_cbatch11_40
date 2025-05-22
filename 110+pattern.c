// nested loop example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // i = 6
    {
        for (j = i; j <= 5; j++) // j = 3
        {
            printf("* "); // 
        }
        printf("\n");
    }
}