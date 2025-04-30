#include <stdio.h>
void main()
{
    int a = 12, b;
    b = a++; // post :- frist value assign in b than increase value of a
    // b = ++a;// pre :- frist increase value of a  than assign increasing value in b
    printf("a = %d\n", a); // 13
    printf("b = %d\n", b); // 12
}