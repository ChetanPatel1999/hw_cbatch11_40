// wap to print sum of individual digit of given number.
#include <stdio.h>
void main()
{
    int num, rem, sum = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 7813
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;//12
        num = num / 10;
    }
    printf("sum of individual digit : %d", sum);//
}