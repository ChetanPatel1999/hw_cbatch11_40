// with return type , with parameter
#include <stdio.h>
int add(int a, int b)
{
    return (a + b);
}
float add2(float a, float b)
{
    return (a + b);
}
char upper(char ch)
{
    char ans;
    ans = ch - 32;
    return ans;
}
void main()
{
    printf("sum = %d\n", add(12, 9));
    printf("sum = %.1f\n", add2(5.2, 3.1));
    printf("upercase = %c\n", upper('m'));
}