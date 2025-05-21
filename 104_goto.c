// club mini project
#include <stdio.h>
void main()
{
    int age, num, p, total_ammount = 0, c1 = 0, c2 = 0, c3 = 0;
    printf("enter your age : ");
    scanf("%d", &age); // 34
    if (age >= 18)
    {
        printf("welcome to my club !\n");
        do
        {
            lable:
            printf("club menu : \n");
            printf("1. noodles : 50\n");
            printf("2. pizza : 350\n");
            printf("3. sandwitch : 150 \n");
            printf("please order to enter num : ");
            scanf("%d", &num);
            if (num == 1)
            {  
                printf("your noodles is orderd \n");
                c1++;
                total_ammount = total_ammount + 50; // 450
            }
            else if (num == 2)
            {
                printf("your pizza is orderd \n");
                c2++;
                total_ammount = total_ammount + 350; // 400
            }
            else if (num == 3)
            {
                printf("your sandwitch is order \n");
                c3++;
                total_ammount = total_ammount + 150;
            }
            else
            {
                printf("please enter 1 to 3 \n");
                goto lable;
            }
            printf("you want to order something more press 1 :");
            scanf("%d", &p);
        } while (p == 1);
        printf("           sir your bill please pay\n");
        printf("---------------------------------------------------\n");
        printf("     item            item-count         total  \n");
        printf("    noodles           %d                  %d   \n", c1, c1 * 50);
        printf("    pizza             %d                  %d   \n", c2, c2 * 350);
        printf("    sandwitch         %d                  %d   \n", c3, c3 * 150);
        printf("---------------------------------------------------\n");
        printf("                 total bill : %d\n ", total_ammount);
        printf("---------------------------------------------------\n");
        printf("             thanks for visiting our club %c",1);
    }
    else
    {
        printf("you are not adult please try after %d year", 18 - age);
    }
}