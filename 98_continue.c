#include <stdio.h>
void main()
{
    int i;
    i = 0;
    while (i <= 20)
    {
        i++;
        if (i % 3==0)
        {
            continue;
        }
        printf("%d ", i);
        i++;
    }
}