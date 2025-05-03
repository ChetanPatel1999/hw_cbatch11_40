#include <stdio.h>
void main()
{
    int ans;
    // ans=12>8 && 5>2 && 5!=9;
    // ans=12>88 || 5>22 || 9!=9;
    // ans=!(12>9);
    ans = !(12 > 88 || 5 > 22 || 9 != 9);
    printf("ans = %d", ans);
}