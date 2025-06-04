// wap to take array element from uesr and print only even element.
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

    printf("\narray even element :- \n");
    // 12 3 5 6 9
    for (i = 0; i < n; i++) // 3
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d  ", arr[i]); // 12 6
        }
    }
    printf("\narray odd element :- \n");
    // 12 3 5 6 9
    for (i = 0; i < n; i++) // 3
    {
        if (arr[i] % 2 ==1)
        {
            printf("%d  ", arr[i]); // 12 6
        }
    }
}