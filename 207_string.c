// string take from user
// fgets() :- its used to take string from user
// fputs() :- its display string on output string.
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter string : ");
    fgets(name, 50, stdin);

    fputs(name, stdout);

    int i;
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        printf("%c\n", name[i]);
    }
}