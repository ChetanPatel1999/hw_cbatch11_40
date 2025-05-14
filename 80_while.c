// wap to print reverse number of given number.
#include <stdio.h>
void main()
{
    int num, rem, rev = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 123
    while (num > 0)
    {
        rem = num % 10;//1
        rev = rev * 10 + rem;//321
        num = num / 10;
    }
    printf("reverse number  : %d", rev); //25
}