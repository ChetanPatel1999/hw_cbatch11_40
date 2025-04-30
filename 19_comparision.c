#include <stdio.h>
void main()
{
    int a = 12, b = 121, ans;
    ans = a != b;
    printf("not equal to  ans :%d\n", ans); // 0
    ans = a < b;
    printf("less than ans :%d\n", ans);//1
    ans = a > b;
    printf("greater than ans :%d\n", ans);//0
    ans = a >= b;
    printf("greater than equal to ans :%d\n", ans);//0
    ans = 12 <= 12;
    printf("less than equal to ans :%d\n", ans);//1
    ans = a == b;
    printf("double equal to ans :%d\n", ans); // 0
}