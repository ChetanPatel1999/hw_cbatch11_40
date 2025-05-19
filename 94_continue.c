// wap to skip 3 multiple using continue stmnt.
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 7
    {
        if (i % 3 == 0)
        {
            continue;
        }
        printf("%d \n", i); // 1 2 4 5 7 8 10
    }
}