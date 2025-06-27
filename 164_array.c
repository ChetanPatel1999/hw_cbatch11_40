// array example in c language
#include <stdio.h>
void main()
{
    int arr[] = {12, 34, 56, 78, 90};
    printf("array element :- \n");
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);
    arr[3] = 800;
    printf("array element after change :- \n");
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);
}