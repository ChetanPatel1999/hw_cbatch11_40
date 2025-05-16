// wap to search given number in given table.
#include <stdio.h>
void main()
{
    int num, s, i, tab, f = 0;
    printf("enter a table : ");
    scanf("%d", &num); // 6
    printf("enter search number  : ");
    scanf("%d", &s); // 6
    for (i = 1; i <= 10; i++)
    {
        tab = num * i;
        if (tab == s)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        printf("num is found");
    }
    else
    {
        printf("num is not found");
    }
}