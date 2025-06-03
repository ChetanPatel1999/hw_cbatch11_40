// wap to print reverse number to given number.
#include <stdio.h>
void number(int num)
{
    printf("%d ", num); // 5 4 3 2 1
    if (num > 1)
    {
        number(num - 1);
    }
}
void main()
{
    number(5);
}