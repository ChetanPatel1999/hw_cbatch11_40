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
void sub()
{
    int a, b, c;
    printf("this is subtraction function.. \n");
    printf("enter first value : ");
    scanf("%d", &a);
    printf("enter second value : ");
    scanf("%d", &b);
    c = a - b;
    printf("sub of %d and %d = %d\n", a, b, c);
}
void mul()
{
    int a, b, c;
    printf("this is multiplication function.. \n");
    printf("enter first value : ");
    scanf("%d", &a);
    printf("enter second value : ");
    scanf("%d", &b);
    c = a * b;
    printf("mul of %d and %d = %d\n", a, b, c);
}
void div()
{
    int a, b, c;
    printf("this is division function.. \n");
    printf("enter first value : ");
    scanf("%d", &a);
    printf("enter second value : ");
    scanf("%d", &b);
    c = a / b;
    printf("div of %d and %d = %d\n", a, b, c);
}
void main()
{
    int num;
    printf("     welcome to my calculator ! \n");
    printf("------------------------------------\n");
    printf("     press 1 for addition : \n");
    printf("     press 2 for subtraction : \n");
    printf("     press 3 for multiplication : \n");
    printf("     press 4 for division : \n");
    printf("     press number : ");
    scanf("%d", &num);
    if (num == 1)
    {
        add();
    }
    else if (num == 2)
    {
        sub();
    }
    else if (num == 3)
    {
        mul();
    }
    else if (num == 4)
    {
        div();
    }
    else
    {
        printf("enter 1 to 4 number ");
    }
}