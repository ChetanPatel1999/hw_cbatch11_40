// pointer to array :-
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int i;
    printf("element of array : ");
    int *ptr;
    ptr = &arr[0];          // 400
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d  ", *ptr);
        ptr++; // 420
    }

    int sum = 0;
    ptr= &arr[0];
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nsum of all array element : %d", sum);
}