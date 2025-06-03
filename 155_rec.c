// wap to do birthday wish 5 times.
#include <stdio.h>
int i = 1; // globle variable
void fun()
{
    printf("happy birthday minu..\n"); // 5
    i++;                               // 6
    if (i <= 5)
    {
        fun();
    }
}
void main()
{
    fun();
}