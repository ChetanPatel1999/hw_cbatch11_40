#include <stdio.h>
int factorial(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++) // 3
    {
        printf("factorial of %d = %d\n", i, factorial(i));
    }
}
void main()
{
    int res = factorial(4);
    printf("factorial of 4  = %d\n", res);
    printf("factorial of 5  = %d\n", factorial(5));
    printf("-----------------------------\n");
    range(1, 5);
}