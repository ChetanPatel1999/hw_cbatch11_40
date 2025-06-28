// make a function for string length .
//  kalyan mart
#include <stdio.h>
int length(char str[])
{
    int i, c = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        c++;
    }
    return c;
}
void main()
{
    char str[50];
    printf("enter string :- ");
    gets(str); // hello
    printf("string : %s\n", str);
    int l = length(str);
    printf("string length = %d", l);
}