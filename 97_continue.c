#include <stdio.h>
void main()
{
    int i = 1;
    while (i <= 10)
    {
        i++; // 4
        if (i % 4 == 0)
        {
            break;
        }
        if (i == 5)
        {
            continue;
        }
        printf("%d ", i); // 2 3
    }
    
}