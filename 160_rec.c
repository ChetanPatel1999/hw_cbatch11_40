// wap to print 1 to 20 even number series.
#include <stdio.h>
void even_series(int s,int e)
{
    if (s % 2 == 0)
    {
        printf("%d ", s); //
    }
    s++; // 9
    if (s <= e)
    {
        even_series(s,e);
    }
}
void main()
{
    even_series(10,20);
}