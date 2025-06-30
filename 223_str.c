// wap to count word in given string.
//  my name is
int word_count(char str[])
{
    int i, c = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            c++;
        }
    }
    return c + 1;
}
#include <stdio.h>
void main()
{
    char str[50];
    printf("enter a string : ");
    gets(str);
    printf("string : %s\n", str);
    printf("total word in string : %d\n", word_count(str));
}