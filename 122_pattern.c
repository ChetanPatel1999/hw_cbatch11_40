// nested loop example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 4; i++) // i = 3
    {
        for (j = 1; j <= 4; j++) // j =
        {
            if (j % 2 == 0)
            {
                printf("1 "); // 20
            }
            else
            {
                printf("0 "); // 20
            }
        }
        printf("\n");
    }
}