// wap to print a msg 5 times using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;
lable:
    printf("hello students \n");
    i++;//4
    if (i <= 5)
    {
        goto lable;
    }
}