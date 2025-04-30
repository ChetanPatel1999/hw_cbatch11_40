#include <stdio.h>
void main()
{
    int a, b;
    a = 12;
    b = 8;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    // a += b;
    // a += a;
    // a %= b;
    a+=5;
    printf("a = %d\n", a); // 17
    printf("b = %d\n", b); // 8
}