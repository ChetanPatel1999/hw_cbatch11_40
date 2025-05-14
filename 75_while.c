//wap to take a number from user and print number digit in reverse order.
#include <stdio.h>
void main()
{
    int num, rem;
    printf("enter a num : ");
    scanf("%d", &num); // 345
    printf("digit in revere order :\n");
    while (num > 0)
    {
        rem = num % 10;
        printf("%d\n", rem);
        num = num / 10;
    }
}