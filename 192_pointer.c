// pointer to array :-
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int i;
    printf("element of array : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    int *ptr;
    ptr = &arr[0];

    printf("\n%d ", *ptr);
    ptr++;
    printf("\n%d ", *ptr);
    ptr++;
    printf("\n%d ", *ptr);
    ptr++;
    printf("\n%d ", *ptr);
    ptr++;
    printf("\n%d ", *ptr);
}