// wap to print reverse string of given string.
#include <stdio.h>
#include <string.h>
void main()
{
    char str[50], i;
    printf("enter a string : ");
    gets(str);
    printf("string : %s\n", str); // hello
    int n = strlen(str) - 1;
    printf("reverse string : ");
    for (i = n; i >= 0; i--) //-1
    {
        printf("%c", str[i]);
    }
    printf("\nstring : %s\n", str); // hello
}