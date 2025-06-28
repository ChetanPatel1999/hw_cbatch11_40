// some built in functions of string
// strcat() :- its combine two string
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[50],st2[50];
    printf("enter string1 : ");
    gets(st1);
    printf("enter string2 : ");
    gets(st2);
    printf("string1 : %s\n", st1);// hello
    printf("string2 : %s\n", st2);// chetan

    strcat(st1," ");
    
    strcat(st1,st2);

    printf("string1 : %s\n", st1);// hellochetan
    printf("string2 : %s\n", st2);// chetan

}