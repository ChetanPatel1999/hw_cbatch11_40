// wap to convert given string in upper case.
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[50];
    printf("enter string : ");
    gets(st1);                    // hello
    printf("string : %s\n", st1); // hello
    int i;
    for (i = 0; i < strlen(st1); i++) // 1
    {
        if (st1[i] >= 97 && st1[i] <= 122)
        {
            st1[i] = st1[i] - 32;
        }
    }
    printf("upper string : %s\n", st1);

    // A - 65   a - 97
    // B - 66   b - 98
    // C - 67   c - 99
}