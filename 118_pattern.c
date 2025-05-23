
// nested loop example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--) // i = 3
    {
        for (j = 1; j <= i; j++) // j = 6
        {
            printf("%d ", j); // 20
        }
        printf("\n");
    }
}