// shoping store project
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct reg
{
    char name[20];
    int pass;
};
struct store
{
    char item[20];
    int price;
};
int ind = 0;
struct store cart[10];
void shoping(); // declaration
void registration(struct reg user[], int user_count)
{
    printf("\n welcome to registration page .... \n");
    printf("enter your name : ");
    scanf("%s", user[user_count].name);
    printf("set password : ");
    scanf("%d", &user[user_count].pass);
    printf("\n registration successfully\n\n");
}
void login(struct reg user[], int user_count)
{
    if (user_count > 0)
    {
        printf("\n welcome to login page .... \n");
        char uname[20];
        int upass, i, f = 0;
        printf("enter your name : ");
        scanf("%s", uname);
        printf("set password : ");
        scanf("%d", &upass);
        for (i = 0; i < user_count; i++)
        {
            if (strcmp(uname, user[i].name) == 0)
            {
                f = 1;
                if (upass == user[i].pass)
                {
                    printf("\n login successfully\n\n");
                    shoping();
                }
                else
                {
                    printf("\nwrong password\n\n");
                }
            }
        }
        if (f == 0)
        {
            printf("\nfirst create registration than log in account\n\n");
        }
    }
             
    {
        printf("\nfirst create registration than log in account\n\n");
    }
}
void dispaystore(struct store stn[], int n)
{
    int i;
    char iname[20];
    printf("\n         store items.....\n");
    printf("           item                price \n");
    for (i = 0; i < n; i++)
    {
        printf("%15s          %8d\n", stn[i].item, stn[i].price);
    }
    printf("\n");
    printf("enter item name to purchesh : ");
    scanf("%s", iname);
    int f = 0;
    for (i = 0; i < n; i++)
    {
        if (strcmp(iname, stn[i].item) == 0)
        {
            f = 1;
            strcpy(cart[ind].item, iname);
            cart[ind].price = stn[i].price;
            ind++;

            printf("\n item add in cart successfully\n\n");
        }
    }
    if (f == 0)
    {
        printf("\nitem is not avaialable in stationary\n\n");
    }
}
void cartdisplay()
{
    int i;
    printf("\n         cart items.....\n");
    printf("           item                price \n");
    for (i = 0; i < ind; i++)
    {
        printf("%15s          %8d\n", cart[i].item, cart[i].price);
    }
    printf("\n");
}
void bill()
{
    cartdisplay();
    int i, totalbill = 0;
    for (i = 0; i < ind; i++)
    {
        totalbill = totalbill + cart[i].price;
    }
    printf("-----------------------------------------------\n");
    printf("               total bill = %d \n\n", totalbill);
}
void shoping()
{
    int choise;
    struct store stn[5];
    strcpy(stn[0].item, "pen");
    stn[0].price = 5;
    strcpy(stn[1].item, "book");
    stn[1].price = 60;
    strcpy(stn[2].item, "pencile");
    stn[2].price = 3;
    strcpy(stn[3].item, "color-box");
    stn[3].price = 40;
    strcpy(stn[4].item, "scale");
    stn[4].price = 10;

    while (1)
    {
        printf("<-----welocme to stationary store------->\n");
        printf(" press 1 to display item ...\n");
        printf(" press 2 cart display ...\n");
        printf(" press 3 bill generate...\n");
        printf(" press 4 exit...\n");
        printf("press any number : ");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            dispaystore(stn, 5);
            break;
        case 2:
            cartdisplay();
            break;
        case 3:
            bill();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nyou choose wrong number...\n\n");
            break;
        }
    }
}
void main()
{
    struct reg user[10];
    int user_count = 0, choise;

    while (1)
    {
        printf("<-----welocme to kalyan mart------->\n");
        printf(" press 1 to registration ...\n");
        printf(" press 2 to login ...\n");
        printf(" press 3 exit ...\n");
        printf("press any number : ");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            registration(user, user_count);
            user_count++;
            break;
        case 2:
            login(user, user_count);
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("\nyou choose wrong number...\n\n");
            break;
        }
    }
}