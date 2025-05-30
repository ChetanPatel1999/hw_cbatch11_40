#include <stdio.h>
void fun3();
void fun1()
{
    printf("fun 1 is called\n");
}
void fun2()
{
    printf("fun 2 is called\n");
    fun1();
    fun3();
    printf("fun2 is end\n");
}
void fun3()
{
    fun1();
    printf("fun 3 is called\n");
}
void main()
{
    printf("main function is start..\n");
    fun2();
    printf("main function is end..\n");
}