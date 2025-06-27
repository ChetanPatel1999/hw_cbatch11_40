//string take from user
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter string : ");
    scanf("%[^\n]s",name);
    printf("name : %s", name);
}