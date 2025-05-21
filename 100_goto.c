// wap to print a msg 5 times using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;

    printf("hello students \n");
    i++; // 2
    if (i <= 5)
    {
        goto lable;
    }
    printf("stamnt 1\n");
    printf("stamnt 2\n");
    printf("stamnt 3\n");
lable:
    printf("after lable");
}