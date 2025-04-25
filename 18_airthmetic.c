#include <stdio.h>
void main()
{
    int a, b, ans;
    printf("enter frist value : ");
    scanf("%d",&a);
    printf("enter second value : ");
    scanf("%d",&b);
    ans = a + b;
    printf("addition : %d\n", ans);//38
    ans = a - b;
    printf("subtraction : %d\n", ans);//30
    ans = a * b;
    printf("multiplication : %d\n", ans);//136
    ans = a / b;
    printf("division : %d\n", ans);//7
    ans = a % b;
    printf("modules : %d\n", ans);//7
}