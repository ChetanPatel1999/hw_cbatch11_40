//wap to search given elment in given array using linear search algorithm.
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int num = 34;
    int i, found = 0;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }
}