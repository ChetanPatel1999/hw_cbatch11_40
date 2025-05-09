// wap to check voter is eligible for voting in india or not.
#include <stdio.h>
void main()
{
    char country;
    printf("enter 'I' if you are indian : ");
    scanf("%c", &country);
    if (country == 'I' || country == 'i')
    {
        int age;
        printf("enter your age : ");
        scanf("%d", &age);
        if (age >= 18)
        {
            printf("eligible to voting in india");
        }
        else
        {
            printf("not eligible to voting in india");
        }
    }
    else
    {
        printf("you are not indian");
    }
}