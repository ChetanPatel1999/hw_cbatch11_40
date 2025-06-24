// how to take array value from user using pointer.
#include <stdio.h>
void main()
{
    int arr[5], i;
    int *ptr;
    ptr = arr; // &arr[0]
    printf("enter array values : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }

    ptr = arr;
    printf("array values : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d  ", *ptr);
        ptr++;
    }

    ptr = arr;
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\narray element sum = %d", sum);
}