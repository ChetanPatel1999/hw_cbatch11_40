// no return type ,but with parameter
#include <stdio.h>
void add(int a, int b, int k)
{
    int c;
    c = a + b + k;
    printf("sum of %d and %d and %d = %d\n", a, b, k, c);
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
void main()
{
    int x = 12, y = 20, z = 100;
    
    add(x, y, z);
    great(600, 800);
    add(12, 6, 2);
    add(7, 5, 8);
    cube(4);
}