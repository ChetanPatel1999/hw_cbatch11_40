// break example
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d \n", i);
    }
    printf("after for loop stmnt1\n");
    printf("after for loop stmnt2\n");
    printf("after for loop stmnt3\n");
}