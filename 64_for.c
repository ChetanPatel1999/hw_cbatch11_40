// wap to find factorial of given number.
#include <stdio.h>
void main()
{
    int n, i, fact = 1;
    printf("enter a num : ");
    scanf("%d", &n);         // 0
    for (i = 1; i <= n; i++) // 6
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d", n, fact);
}