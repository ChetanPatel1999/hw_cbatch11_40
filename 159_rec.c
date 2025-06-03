// wap to print 1 to 20 even number series.
#include <stdio.h>
void even_series()
{
    static int i = 1;
    if (i % 2 == 0)
    {
        printf("%d ", i); //
    }
    i++; // 11
    if (i <= 20)
    {
        even_series();
    }
}
void main()
{
    even_series();
}