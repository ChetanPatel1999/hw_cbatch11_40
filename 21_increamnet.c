#include <stdio.h>
void main()
{
    int a = 12;
    a++;
    printf("a = %d\n", a);//13
    ++a;
    printf("a = %d\n", a);//14
    a--;
    printf("a = %d\n", a);//13
    --a;
    printf("a = %d\n", a);//12
}