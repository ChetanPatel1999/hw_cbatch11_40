// with return type , with parameter
#include <stdio.h>
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
void even_odd(int num)
{
    if (num % 2 == 0)
    {
        printf("num is even \n");
    }
    else
    {
        printf("num is odd\n");
    }
}
void main()
{
    int res = add(12, 6);
    printf("sum = %d\n", res);
    printf("sum = %d\n", add(5, 9));
    even_odd(res);
    if (add(34, 7) % 2 == 0)
    {
        printf("num is even ");
    }
    else
    {
        printf("num is odd");
    }
}