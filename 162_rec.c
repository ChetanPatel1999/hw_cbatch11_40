// wap to print reverse number to given number.
#include <stdio.h>
void number(int num)
{
    if (num > 1)
    {
        number(num - 1);
    }
    printf("%d ", num);
}
void main()
{
    number(5);
}