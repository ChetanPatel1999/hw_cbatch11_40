// wap to find max element from array.
#include <stdio.h>
void main()
{
    int arr1[5] = {12, 5643, 566, 78, 2}, i;
    int arr2[5] = {13, 4, 8, 98, 2};
    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d ", arr1[i]);
    }
    //12, 5643, 566, 78, 2
    int max = arr1[0];
    for (i = 0; i < 5; i++) // 5
    {
        if (max < arr1[i])
        {
            max = arr1[i];
        }
    }
    printf("\nmax element : %d\n", max);
    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d ", arr2[i]);
    }
    //13, 4, 8, 98, 2
    max = arr2[0];
    for (i = 0; i < 5; i++) // 5
    {
        if (max < arr2[i])
        {
            max = arr2[i];
        }
    }
    printf("\nmax element : %d", max);
}