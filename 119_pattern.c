// nested loop example
#include <stdio.h>
void main()
{
    int i, j,num=1;
    for (i = 1; i <= 4; i++) // i = 3
    {
        for (j = 1; j <= i; j++) // j = 6
        {
            printf("%d ",num); // 20
            num++;
        }
        printf("\n");
    }
}