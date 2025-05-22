// nested loop example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--) // i = 3
    {
        for (j = i; j <= 5; j++) // j = 6
        {
            printf("%d ", i); // 5
        }
        printf("\n");
    }
}