// wap to find given digit in given number.
#include <stdio.h>
void main()
{
    int num, digit, rem, f = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 6787345
    printf("enter a digit : ");
    scanf("%d", &digit); // 5
    while (num > 0)
    {
        rem = num % 10;
        if (rem == digit)
        {
            f = 1;
            break;
        }
        num = num / 10;
    }
    if (f == 1)
    {
        printf("digit is found in number");
    }
    else
    {
        printf("digit is not found in number");
    }
}