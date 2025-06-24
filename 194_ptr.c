// wap to print array element in reverse order using pointer.
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int i;
    printf("element of array : ");
    int *ptr;
    ptr = &arr[0];          // 400
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d  ", *ptr);
        ptr++; // 420
    }
    printf("\narray element in reverse order : ");
    ptr--;// 416
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr--;
    }
}