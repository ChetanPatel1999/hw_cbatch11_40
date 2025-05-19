// wap to check given number is prime or not.
#include <stdio.h>
void main()
{
    int i, n, p = 0;
    printf("enter a num : ");
    scanf("%d", &n); // 400
    for (i = 1; i <= n; i++)//4
    {
        if (n % i == 0)
        {
            p++; // 3
        }
        if(p>2)
        {
            break;
        }
    }
    if (p == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number ");
    }
}