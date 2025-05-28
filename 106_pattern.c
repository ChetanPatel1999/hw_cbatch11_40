// nested loop example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // i = 6
    {
        for (j = 1; j <= 5; j++) // j = 5
        {
            printf("%c ",1); // 20
        }
        printf("\n");
    }
}