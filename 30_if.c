#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 0
    if (num == 1)
    {
        printf("good morning\n");
    }
    if (num == 2)
    {
        printf("good after noon\n");
    }
    if (num == 3)
    {
        printf("good evening\n");
    }
    if (num == 4)
    {
        printf("good night\n");
    }
    if (num > 4 || num==0)
    {
        printf("please enter 1 to 4");
    }
}