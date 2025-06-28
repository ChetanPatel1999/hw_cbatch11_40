// some built in functions of string
// strupr () :- its convert string in upper case
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[50];
    printf("enter string : ");
    gets(st1);//ab ram
    printf("string : %s\n", st1);//ab ram
    strupr(st1);
    printf("upper string : %s\n", st1);//AB RAM
}