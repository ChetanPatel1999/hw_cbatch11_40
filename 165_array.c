// array example in c language
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int i;
    printf("array element :- \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d\n", arr[i]); // 12 34  56 78 90
    }

    arr[3] = 800;

    printf("array element after change :- \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d ", arr[i]); // 12 34  56 800 90
    }
}