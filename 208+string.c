// wap to count string length .
// kalyan mart
#include <stdio.h>
void main()
{
    char str[50];
    printf("enter string :- ");
    gets(str); // hello
    printf("string : %s\n", str);
    int i, c = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        c++;
    }
    printf("string length = %d", c);
}