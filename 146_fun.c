#include <stdio.h>
void pattern()
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 15; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void main()
{
    pattern();
    printf("    Name : chetan patel\n");
    pattern();
    printf("    collage : IIST\n");
    pattern();
    printf("    address : indore (m.p.)\n");
    pattern();
    printf("    hobby : dancing\n");
    pattern();
}