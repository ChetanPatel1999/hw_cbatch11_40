#include <stdio.h>
void display(int arr1[], int n)
{
    int i;
    printf("array element are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
}
void reverse_display(int arr1[], int n)
{
    int i;
    // 12, 34, 56, 78, 90
    printf("reverese array element are : ");
    for (i = n - 1; i >= 0; i--) //-1
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
}
void main()
{
    int arr1[5] = {12, 34, 56, 78, 90};
    display(arr1, 5);
    reverse_display(arr1, 5);

    int marks[6] = {60, 30, 70, 88, 55, 77};
    display(marks, 6);
    reverse_display(marks, 6);
}