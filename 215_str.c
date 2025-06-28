// some built in functions of string
// strrev () :- its convert string in reverse
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[50];
    printf("enter string : ");
    gets(st1);
    printf("string : %s\n", st1);
    strrev(st1);
    printf("reverse string : %s\n", st1);
}