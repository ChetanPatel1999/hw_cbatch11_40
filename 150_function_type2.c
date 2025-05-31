// no return type ,but with parameter
#include <stdio.h>
void add(int a, int b)
{
    int c;
    c = a + b;
    printf("sum of %d and %d  = %d\n", a, b, c);
}
void cube(int num)
{
    int c;
    c = num * num * num;
    printf("cube of %d = %d\n", num, c);
}
void great(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("greatest num : %d\n", num1);
    }
    else
    {
        printf("greatest num : %d\n", num2);
    }
}
void table(int num)
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
}
void factorial(int num) // 5
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d \n", num, fact);
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++) // 6
    {
        factorial(i);
    }
}
void add2(float a, float b)
{
    printf("sum of %.1f and %.1f = %.1f", a, b, a + b);
}
void main()
{
    // int x = 12, y = 20, z = 100;
    // add(x, y, z);
    // great(600, 800);
    // add(12, 6, 2);
    // add(7, 5, 8);
    // cube(4);
    // table(5);
    // table(3);
    // factorial(5);
    // range(1, 5);
    // printf("--------------------------------\n");
    // range(5,10);
    // printf("--------------------------------\n");
    // range(4,8);
    add2(2.3, 7.5);
}