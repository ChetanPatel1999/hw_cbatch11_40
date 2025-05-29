// function example
#include <stdio.h>
void add(); // function declaration
void main()
{
    printf("main function start ..\n");
    add(); // function calling
    printf("inside main\n");
    add();
    printf("main function end...");
}
void add() // function defination
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