// break example
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 3
    {
        if (i == 5)
        {
            break;
        }
        printf("%d \n", i); // 1 2
    }
}