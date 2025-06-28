// wap to make a function to convert string in uperr case.
#include <stdio.h>
#include <string.h>
void upper(char st1[])
{
    int i;
    for (i = 0; i < strlen(st1); i++) // 1
    {
        if (st1[i] >= 97 && st1[i] <= 122)
        {
            st1[i] = st1[i] - 32;
        }
    }
}
void main()
{
    char st1[50];
    printf("enter string : ");
    gets(st1);                    // hello
    printf("string : %s\n", st1); // hello
    upper(st1);
    printf("upper string : %s\n", st1); //
}