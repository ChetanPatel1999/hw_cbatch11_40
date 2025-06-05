// wap  to print only positive element from array.
#include <stdio.h>
void main()
{
    int n, i;
    printf("enter array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array element are  : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nonly positive array element are  : \n");
    // 12 -5 67 8 -9
    for (i = 0; i < n; i++)//2
    {
        if (arr[i] > 0)
        {
            printf("%d ", arr[i]);
        }
    }
}