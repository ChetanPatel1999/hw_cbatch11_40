#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 4; i++) // i =3
    {
        for (j = 1; j <= (i * 2) - 1; j++) // j = 6
        {
            printf("%d", j); // 20
        }
        printf("\n");
    }
}