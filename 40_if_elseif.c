// wap to check given number is multiple of 3 and 4 or multiple of only 3 or  multiple of only 4 or not multiple of 3 and 4.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); //
    if (num % 3 == 0 && num % 4 == 0)
    {
        printf("num is multiple of 3 and 4 ");
    }
    else if (num % 3 == 0)
    {
        printf("num is multiple of only 3 ");
    }
    else if (num % 4 == 0)
    {
        printf("num is multiple of only 4 ");
    }
    else
    {
        printf("num is not multiple of 3 and 4 ");
    }
}