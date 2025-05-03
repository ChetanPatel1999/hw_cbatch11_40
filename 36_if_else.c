// wap to check given number in range(200-500) or not.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 345
    if (num > 200 && num < 500)
    {
        printf("num is in range(200-500)");
    }
    else
    {
        printf("num is not in range(200-500)");
    }
}