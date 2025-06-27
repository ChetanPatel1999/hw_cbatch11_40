// string take from user
// gets() :- its used to take string from user
// puts() :- its display string on output string.
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter string : ");
    gets(name);

    puts(name);

    int i;
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        printf("%c\n", name[i]);
    }
}