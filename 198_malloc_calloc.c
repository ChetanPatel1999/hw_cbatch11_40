#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr1, *ptr2;
    ptr1 = (int *)(malloc(5 * sizeof(int)));
    ptr2 = (int *)(calloc(5, sizeof(int)));
    
    int i;
    *ptr1= 89;
    printf("default value of malloc : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr1);
        ptr1++;
    }
    printf("\ndefault value of calloc : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr2);
        ptr2++;
    }
}