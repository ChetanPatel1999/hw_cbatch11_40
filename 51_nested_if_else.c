// wap to find greatest number between three numbers without using logical and operator.
#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("enter num1 value : ");
    scanf("%d", &num1); // 899
    printf("enter num2 value : ");
    scanf("%d", &num2); // 900
    printf("enter num3 value : ");
    scanf("%d", &num3); // 566
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("greatest num : %d", num1);
        }
        else
        {
            printf("greatest num : %d", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("greatest num : %d", num2);
        }
        else
        {
            printf("greatest num : %d", num3);
        }
    }
}