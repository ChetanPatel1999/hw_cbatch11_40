// wap to check given string is plindrom or not.
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
void reverse(char str[])
{
    int n = strlen(str), temp, i; // 6
    // n a t e h c
    for (i = 0; i < (n / 2); i++) // 3
    {
        temp = str[i]; // e
        str[i] = str[(n - 1) - i];
        str[(n - 1) - i] = temp;
    }
}
int compare(char str1[], char str2[])
{
    // str1= hello   str2 = hellpp
    if (strlen(str1) != strlen(str2))
    {
        return 0;
    }
    else
    {
        // str1= hello   str2 = hello
        int i;
        for (i = 0; i < strlen(str1); i++)
        {
            if (str1[i] != str2[i])
            {
                return 0;
            }
        }
        return 1;
    }
}
void main()
{
    // naman
    // madam
    // malayalam

    char str1[50], temp[50];
    printf("enter a string : ");
    gets(str1);

    copy(temp, str1);
    reverse(str1);
    if (compare(temp, str1))
    {
        printf("string is plindrom");
    }
    else
    {
        printf("string not plindrom");
    }
}