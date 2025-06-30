// wap to compare two string are same or different .
#include <stdio.h>
#include <string.h>
void copy(char str2[], char str1[]) // hello
{
    int i;
    for (i = 0; i < strlen(str1); i++) // 6
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
}
void main()
{
    char str1[50], str2[50];
    printf("enter a string1 : ");
    gets(str1);
    copy(str2, str1);
    printf("string1 : %s\n", str1);
    printf("string2 : %s\n", str2);
}