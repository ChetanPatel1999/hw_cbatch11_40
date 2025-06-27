// wap to print only vovel from given string
#include <stdio.h>
void main()
{

    char name[] = "my name is chetan patel";

    printf("name = %s\n", name);

    int i, c = 0;
    printf("only vovle string : ");
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            printf("%c ", name[i]);
            c++;
        }
    }
    printf("\ntotal vovel count : %d", c);
    c = 0;
    printf("\nonly consonent string : ");
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        if (!(name[i] == ' ' || name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'))
        {
            printf("%c ", name[i]);
            c++;
        }
    }
    printf("\ntotal consonant count : %d", c);
}