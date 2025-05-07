// calculator mini project
#include <stdio.h>
void main()
{
    int num, a, b, c;
    printf("     welcome to my calculator ! \n");
    printf("------------------------------------\n");
    printf("     press 1 for addition : \n");
    printf("     press 2 for subtraction : \n");
    printf("     press 3 for multiplication : \n");
    printf("     press 4 for division : \n");
    printf("     press number : ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("you are choosed addition programm ! \n");
        printf("enter first num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a + b;
        printf("%d + %d = %d\n", a, b, c);
        break;
    case 2:
        printf("you are choosed subtraction programm ! \n");
        printf("enter first num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a - b;
        printf("%d - %d = %d\n", a, b, c);
        break;
    case 3:
        printf("you are choosed multiplication programm ! \n");
        printf("enter first num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a * b;
        printf("%d * %d = %d\n", a, b, c);
        break;
    case 4:
        printf("you are choosed division programm ! \n");
        printf("enter first num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a / b;
        printf("%d / %d = %d\n", a, b, c);
        break;
    default:
        printf("please enter 1 to 4 ! ");
    }
}