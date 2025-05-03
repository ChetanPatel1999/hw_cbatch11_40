#include <stdio.h>
void main()
{
    char alpha;
    printf("enter alphabet : ");
    scanf("%c", &alpha); // p
    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
    {
        printf("alphabet is vovle");
    }
    else
    {
        printf("alphabet is consonent");
    }
}