// nested loop example
#include <stdio.h>
void main()
{
    int i, j,n=7;
    for (i = 1; i <= n; i++) // i =
    {
        for (j = i; j <= n; j++) // j =
        {
            printf("%d ", j); //
        }
        printf("\n");
    }
}