// nested loop example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // i =
    {
        for (j = i; j <= 5; j++) // j =
        {
            printf("%d ", i); //
        }
        printf("\n");
    }
}