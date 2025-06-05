// wap to find max element from array using function.
#include <stdio.h>
void display(int arr[], int n)
{
    int i;
    printf("array element are : \n");
    for (i = 0; i < n; i++) // 5
    {
        printf("%d ", arr[i]);
    }
}
int max_find(int arr[], int n)
{
    // 12, 5643, 566, 78, 2
    int max = arr[0], i;
    for (i = 0; i < n; i++) // 5
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
void main()
{
    int arr1[5] = {12, 5643, 566, 78, 2}, i;
    int arr2[7] = {13, 4, 8, 98, 2, 45, 33};
    int arr3[10] = {3, 5, 2, 24, 4, 18, 15, 20, 12, 10};
    display(arr1, 5);
    printf("\nmax element : %d\n", max_find(arr1, 5));
    display(arr2, 7);
    printf("\nmax element : %d\n", max_find(arr2, 7));
    display(arr3, 10);
    printf("\nmax element : %d\n", max_find(arr3, 10));
}