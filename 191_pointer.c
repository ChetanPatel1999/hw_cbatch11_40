// each type pointer have same ammount of memory inside computer
#include <stdio.h>
void main()
{
    int *ptr1;
    char *ptr2;
    short int *ptr3;
    double *ptr4;
    printf("memory allocate in byte = %d\n", sizeof(ptr1));
    printf("memory allocate in byte = %d\n", sizeof(ptr2));
    printf("memory allocate in byte = %d\n", sizeof(ptr3));
    printf("memory allocate in byte = %d\n", sizeof(ptr4));
}