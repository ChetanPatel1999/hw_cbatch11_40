// string example in c langauge
// visit string using null charactor
#include <stdio.h>
void main()
{

    char name[] = "my name is chetan patel";
    printf("name = %s\n", name);

    int i;
    for (i = 0; name[i] != '\0'; i++)//6
    {
        printf("%c\n", name[i]);
    }
}