// wap to check givan char is alphebet or not.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char : ");
    scanf("%c", &ch); // @
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("char is alphabet");
    }
    else
    {
        printf("char is not alphabet");
    }
}