// no return type , no parameter
#include <stdio.h>
void add()
{
    int a, b, c;
    printf("this is addition function.. \n");
    printf("enter first value : ");
    scanf("%d", &a);
    printf("enter second value : ");
    scanf("%d", &b);
    c = a + b;
    printf("sum of %d and %d = %d\n", a, b, c);
}
void cube()
{
    int num, c;
    printf("enter a num : ");
    scanf("%d", &num);
    c = num * num * num;
    printf("cube of %d = %d\n", num, c);
}
void great()
{
    int num1, num2;
    printf("enter a num1 : ");
    scanf("%d", &num1);
    printf("enter a num2 : ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("greatest num : %d", num1);
    }
    else
    {
        printf("greatest num : %d", num2);
    }
}
void main()
{
    // add();
    // cube();
    great();
}