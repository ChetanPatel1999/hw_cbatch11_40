// wap to print day name according to number.
#include <stdio.h>
void main()
{
    int day;
    printf("enter a daynum : ");
    scanf("%d", &day); // 2
    if (day == 1)
    {
        printf("monday");
    }
    else if (day == 2)
    {
        printf("tuesday");
    }
    else if (day == 3)
    {
        printf("wednusday");
    }
    else if (day == 4)
    {
        printf("thursday");
    }
    else if (day == 5)
    {
        printf("friday");
    }
    else if (day == 6)
    {
        printf("saturday");
    }
    else if (day == 7)
    {
        printf("sunday");
    }
    else
    {
        printf("please enter 1 to 7");
    }
}