// wap to print factors count of given number.
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
    printf("total factors count : %d", p);
}