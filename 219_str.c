// some built in functions of string
// strcmp() :- its compare two string same or different.
// strcmpi() :- its compare two string same or different nad ignore lower , upper case.
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[50], st2[50];
    printf("enter string1 : ");
    gets(st1);
    printf("enter string2 : ");
    gets(st2);
    printf("string1 : %s\n", st1);//hello
    printf("string2 : %s\n", st2);//hello

    if ( strcmp(st1,st2) == 0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }

}