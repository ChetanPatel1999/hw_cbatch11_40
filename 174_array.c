// wap to search given elment in given array using linear search algorithm.
#include <stdio.h>
int linear_search(int arr[], int s, int num)
{
    int i;
    for(i = 0; i < s; i++)
    {
        if (arr[i] == num)
        {
            return 1;
        }
    }
    return 0;
}
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int num = 90;

    if (linear_search(arr, 5, num) == 1)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }
}