// example of realloc
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n1, n2;
    printf("enter dynamic array size : ");
    scanf("%d", &n1); // 5
    int *ptr, *temp;
    ptr = (int *)malloc(n1 * sizeof(int));
    temp = ptr;
    int i;
    printf("address of dynamic array : ");
    for (i = 0; i < n1; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }

    printf("\nenter how many size increasing of array: ");
    scanf("%d", &n2); // 3
    ptr = temp;
    n2 = n2 + n1;
    ptr = realloc(ptr, n2 * sizeof(int));
    temp = ptr;
    printf("address of new increasing dynamic array : ");
    for (i = 0; i < n2; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }

    ptr = temp;
    free(ptr); // delete dynamic memory
}