// wap to print sum of array element.
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90}; // array declaration and assignment
    int i;
    printf("array element :- \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d  ", arr[i]);
    }
    int sum = 0;
    for (i = 0; i < 5; i++)//5
    {
        sum = sum + arr[i];//270
    }
    printf("\nsum of array element : %d ", sum);
}