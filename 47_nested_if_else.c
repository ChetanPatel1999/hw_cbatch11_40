// club mini project
#include <stdio.h>
void main()
{
    int age, num, type;
    printf("enter your age : ");
    scanf("%d", &age); // 34
    if (age >= 18)
    {
        printf("welcome to my club !\n");
        printf("club menu : \n");
        printf("1. noodles : 50\n");
        printf("2. pizza : 350\n");
        printf("3. sandwitch \n");
        printf("please order to enter num : ");
        scanf("%d", &num);
        if (num == 1)
        {
            printf("your noodles is orderd please pay 50 rs");
        }
        else if (num == 2)
        {
            printf("your pizza is orderd please pay 350 rs");
        }
        else if (num == 3)
        {
            printf("\nsandwitch types : \n");
            printf("1. masala sandwitch : 60\n");
            printf("2. chiz sandwitch : 80\n");
            printf("3. corn chiz sandwitch : 120\n");
            printf("select sandwitch type : ");
            scanf("%d", &type);
            switch(type)
            {
              case 1:  printf("your masala sandwitch is orderd please pay 60 rs");break;
              case 2: printf("your chiz sandwitch is orderd please pay 80 rs");break;
              case 3: printf("your corn chiz sandwitch is orderd please pay 120 rs");break;
              default: printf("please enter 1 to 3");break;
            }
        }
        else
        {
            printf("please enter 1 to 3 ");
        }
    }
    else
    {
        printf("you are not adult please try after %d year", 18 - age);
    }
}