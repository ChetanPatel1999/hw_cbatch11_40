// some built in functions of string
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[50];
    printf("enter string :- ");
    gets(st1);
    printf("string : %s\n", st1);
    int l = strlen(st1);
    printf("string length : %d", l);
}