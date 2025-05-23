// nested loop example
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 'A'; i <='E'; i++) // i = 
    {
        for (j = 'A'; j <= i; j++) // j = 
        {
            printf("%c ",j); // 
        }
        printf("\n");
    }
}