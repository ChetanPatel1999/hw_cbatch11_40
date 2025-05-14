// wap to print sum of only even individual digit of given number.
#include <stdio.h>
void main()
{
    int num, rem, sum = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 768163   
    while (num > 0)
    {
        rem = num % 10;
        if (rem % 2 == 0)
        {
            sum = sum + rem; 
        }
        num = num / 10;
    }
    printf("sum of only even individual digit : %d", sum); //
}