// nested loop example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--) // i = 
    {
        for (j = i; j <= 5; j++) // j = 
        {
            printf("%d ", j); // 5
        }
        printf("\n");
    }
}