// wap to revrse string in same string.
#include <stdio.h>
#include <string.h>
void reverse(char str[])
{
    int n = strlen(str), temp, i; // 6
    // n a t e h c
    for (i = 0; i < (n / 2); i++) // 3
    {
        temp = str[i]; // e
        str[i] = str[(n - 1) - i];
        str[(n - 1) - i] = temp;
    }
}
void main()
{
    char str[50], i, temp;
    printf("enter a string : ");
    gets(str);
    printf("string : %s\n", str); // chetan
    reverse(str);
    printf("\nreverse string : %s\n", str); // nahtehc

    char str2[] = "kalyan mart";
    reverse(str2);
    printf("\nreverse string : %s\n", str2); 
}