// nested loop example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // i = 
    {
        for (j = 1; j <= 5; j++) // j = 
        {
            printf("%2d ", i*j); // 
        }
        printf("\n");
    }
}