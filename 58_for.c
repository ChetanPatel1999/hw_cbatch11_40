// wap to print number 1 to n(given number).
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); // 10
    for (i = 1; i <= n; i++)
    {
        printf("square of %d= %d \n", i, i * i);
    }
}