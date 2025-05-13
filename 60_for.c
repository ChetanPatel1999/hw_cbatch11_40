// wap to print even number series givan range.
#include <stdio.h>
void main()
{
    int i, n, s;
    printf("enter starting range : ");
    scanf("%d", &s); // s = 12
    printf("enter ending range : ");
    scanf("%d", &n); // n = 30
    printf("even number series : ");
    for (i = s; i <= n; i++) // 13
    {
        if (i % 2 == 0)
        {
            printf("%d ", i); //12 14
        }
    }
}