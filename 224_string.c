// wap to compare two string are same or different .
#include <stdio.h>
#include <string.h>
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
    char str1[50], str2[50];
    printf("enter a string1 : ");
    gets(str1);
    printf("enter a string2 : ");
    gets(str2);
    printf("string1 : %s\n", str1);
    printf("string2 : %s\n", str2);
    if (compare(str1, str2))
    {
        printf("string are same");
    }
    else
    {
        printf("string are not same");
    }
}