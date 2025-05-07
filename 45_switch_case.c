// wap to print your friend name according to frist latter of name.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter frist latter of name : ");
    scanf("%c", &ch);//p
    switch(ch)
    {
        case 'k' : printf("kalyani patil");break;
        case 'n' : printf("nikita pal");break;
        case 's' : printf("somya gurjur");break;
        case 'm' : printf("minakshi yadav");break;
        default : printf("you have not friend which name start with %c ",ch);
    }
}