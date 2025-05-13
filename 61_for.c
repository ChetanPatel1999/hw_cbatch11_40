// wap to print sum 1 to n.
#include <stdio.h>
void main()
{
    int i, sum = 0, n;
    printf("enter a num : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("sum = %d \n", sum);
    printf("average  = %.2f ", sum /(float)n);
}