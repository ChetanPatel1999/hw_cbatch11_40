// wap to check given number is prime or not.
#include <stdio.h>
void main()
{
    int i, n, p = 0;
    printf("enter a num : ");
    scanf("%d", &n); // 15
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            p++; // 4
        }
    }
    if (p == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}