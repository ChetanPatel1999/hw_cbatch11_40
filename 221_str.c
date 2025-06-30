// wap to revrse string in same string.
#include <stdio.h>
#include <string.h>
void main()
{
    char str[50], i, temp;
    printf("enter a string : ");
    gets(str);
    printf("string : %s\n", str); // chetan
    int n = strlen(str);          // 6
    // n a t e h c
    for (i = 0; i < (n / 2); i++) // 3
    {
        temp = str[i]; // e
        str[i] = str[(n - 1) - i];
        str[(n - 1) - i] = temp;
    }
    printf("\nreverse string : %s\n", str); // nahtehc
}