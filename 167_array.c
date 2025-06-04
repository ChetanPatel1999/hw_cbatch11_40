// wap to take array element from uesr and print sum of array element.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d", &n);
    int arr[n]; // array declaration
    int i;
    printf("enter array element : \n");
    for (i = 0; i < n; i++) // 5
    {
        scanf("%d", &arr[i]);
    }

    printf("array element :- \n");
    for (i = 0; i < n; i++) // 5
    {
        printf("%d  ", arr[i]);
    }
    int sum = 0;
    for (i = 0; i < n; i++) // 5
    {
        sum = sum + arr[i]; // 270
    }
    printf("\nsum of array element : %d ", sum);
}