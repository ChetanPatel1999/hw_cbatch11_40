// wap to find max element from array.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *arr = (int *)malloc(5 * sizeof(int)), *temp, i;
    temp = arr;
    *arr = 12;
    arr++;
    *arr = 5;
    arr++;
    *arr = 15;
    arr++;
    *arr = 555;
    arr++;
    *arr = 67;
    arr = temp;
    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d ", *arr);
        arr++;
    }
    arr = temp;
    // 12, 5643, 566, 78, 2
    int max = *arr;
    for (i = 0; i < 5; i++) // 5
    {
        if (max < *arr)
        {
            max = *arr;
        }
        arr++;
    }
    printf("\nmax element : %d\n", max);
}