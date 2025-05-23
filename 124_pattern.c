#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i <= 9; i++) // i =2
    {
        for (j = 5; j <= 14 - i; j++) // j = 6
        {
            printf("%d ", j - 4); // 20
        }
        printf("\n");
    }
}