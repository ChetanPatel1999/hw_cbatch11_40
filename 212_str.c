// some built in functions of string
// strlwr () :- its convert string in lower case
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[50];
    printf("enter string : ");
    gets(st1);//ab ram
    printf("string : %s\n", st1);//ab ram
    strlwr(st1);
    printf("lower string : %s\n", st1);//AB RAM
}