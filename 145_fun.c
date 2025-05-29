#include <stdio.h>
void add()
{
    int a, b, c;
    printf("this is addition function.. \n");
    printf("enter first value : ");
    scanf("%d", &a);
    printf("enter second value : ");
    scanf("%d", &b);
    c = a + b;
    printf("sum of %d and %d = %d\n", a, b, c);
}
void main()
{
    int i;
    for (i = 1; i <= 3; i++) // 2
    {
        add();
    }
}