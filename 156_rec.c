// wap to do birthday wish 5 times.
#include <stdio.h>
void fun()
{
    static int i = 1;                  // its run only one time in programm
    printf("happy birthday minu..\n"); // 3
    i++;                               // 4
    if (i <= 5)
    {
        fun();
    }
}
void main()
{
    fun();
}