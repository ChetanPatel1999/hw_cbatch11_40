// wap to check given number is even-postive, even-nagative, odd-postive and odd-nagative.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // -33
    if (num % 2 == 0 && num > 0)
    {
        printf("even - positive");
    }
    else if (num % 2 == 0 && num < 0)
    {
        printf("even - nagative");
    }
    else if (num % 2 == 1 && num > 0)
    {
        printf("odd - positive");
    }
    else
    {
        printf("odd - nagative");
    }
}