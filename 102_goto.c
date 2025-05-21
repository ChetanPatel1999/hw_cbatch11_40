// wap to print table of given number using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1,n;
    printf("enter a num : ");
    scanf("%d",&n);
lable:
    printf("%d x %d = %d \n", n,i,n*i);
    i++;
    if (i <= 10)
    {
        goto lable;
    }
}