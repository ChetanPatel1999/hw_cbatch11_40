// nested loop example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 4; i++) // i = 6
    {
        for (j = 1; j <= 3; j++) // j = 5
        {
            printf("hello students\n"); // 20
        }
        printf("----------------------\n");
    }
}