// wap to print even number 1 to 10 using while loop.
#include <stdio.h>
void main()
{
    int i = 1;
    while (i <= 20)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
}