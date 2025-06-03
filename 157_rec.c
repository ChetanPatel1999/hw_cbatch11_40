// wap to print 1 to 10 number using recursion..
#include <stdio.h>
void num1_to_10()
{
    static int i = 1;
    printf("%d\n", i);//1 2 3 4 5 6 7 8 9 10
    i++;//11
    if (i <= 10)
    {
        num1_to_10();
    }
}
void main()
{
    num1_to_10();
}