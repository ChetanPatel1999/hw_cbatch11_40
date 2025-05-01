//wap to check both number are same or different.
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("enter frist num : ");
    scanf("%d", &num1);
    printf("enter second num : ");
    scanf("%d", &num2);
    num1 == num2 ? printf("both number are same") : printf("both number are different");
}