// wap to print sum of individual digit of given number.
#include <stdio.h>
void main()
{
    int num, rem, s, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 73813
    printf("enter search digit : ");
    scanf("%d", &s); // 3
    while (num > 0)
    {
        rem = num % 10;
        if (rem == s)
        {
            c++; // 2
        }
        num = num / 10;
    }
    if (c == 0)
    {
        printf("digit is not found");
    }
    else
    {
        printf("%d is found %d times", s, c);
    }
}