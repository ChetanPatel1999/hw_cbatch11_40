// some built in functions of string
// strcpy() :- its copy one variable string into  other varaible.
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[50];
    strcpy(st1, "hello world institute");
    printf("string1 : %s\n", st1); // hello
}