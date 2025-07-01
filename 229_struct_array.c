#include <stdio.h>
#include <string.h>
struct bottle
{
    char color[20];
    int price;
    float capacity;
};
void main()
{
    struct bottle b[3];
    int i;
    for (i = 0; i < 3; i++) // 1
    {
        printf("enter bottle%d info : \n", i + 1);
        printf("enter bottle color : ");
        scanf("%s", b[i].color);
        printf("enter bottle price : ");
        scanf("%d", &b[i].price);
        printf("enter bottle capacity : ");
        scanf("%f", &b[i].capacity);
    }

    for (i = 0; i < 3; i++)
    {
        printf("bottle%d info : \n", i + 1);
        printf("bottle color : %s\n", b[i].color);
        printf("bottle price : %d rs.\n", b[i].price);
        printf("bottle capacity : %.1f liter\n", b[i].capacity);
    }
}