// some built in functions of string
// strcpy() :- its copy one variable string into  other varaible.
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[50], st2[50];
    printf("enter string1 : ");
    gets(st1);
    printf("string1 : %s\n", st1); // hello
    printf("string2 : %s\n", st2); // garbage

    strcpy(st2, st1);

    printf("string1 : %s\n", st1); // hello
    printf("string2 : %s\n", st2); // hello
}