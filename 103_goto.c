// wap to check given number is prime or not.
#include <stdio.h>
void main()
{
    int i = 1, n, c = 0;
    printf("enter a num : ");
    scanf("%d", &n); // 15
lable:
    if (n % i == 0)
    {
        c++;
    }
    i++; // 3
    if (i <= n)
    {
        goto lable;
    }
    if (c == 2)
    {
        printf("num is prime\n");
    }
    else
    {
        printf("num is not prime\n");
    }
}
