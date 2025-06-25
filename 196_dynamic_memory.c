// malloc function is used to allocate dynamic memory.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, n;
    int *ptr, *temp;
    printf("enter dynamic array size :- ");
    scanf("%d", &n);
    ptr = (int*)(malloc(n * sizeof(int))); // &arr[0]
    temp = ptr;
    printf("enter array values : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }

    ptr = temp;
    printf("array values : ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", *ptr);
        ptr++;
    }

    ptr = temp;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\narray element sum = %d", sum);
    ptr = temp;
    // 12  34 56 78 90
    *(ptr + 2) = 500;
    printf("\narray values : ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", *ptr);
        ptr++;
    }
    ptr = temp;
    free(ptr); // its delete dynamic allocate memory
}