// wap to print count digit in  given number.
#include <stdio.h>
void main()
{
    int num, rem, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 67
    while (num > 0)
    {
        c++;//4
        num = num / 10;
    }
    printf("digit count : %d", c); //4
}