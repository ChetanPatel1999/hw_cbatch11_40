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
    struct bottle b1, b2, b3;

    printf("enter bottle info : \n");
    printf("enter bottle color : ");
    scanf("%s", b1.color);
    printf("enter bottle price : ");
    scanf("%d", &b1.price);
    printf("enter bottle capacity : ");
    scanf("%f", &b1.capacity);

    printf("bottle1 info : \n");
    printf("bottle color : %s\n", b1.color);
    printf("bottle price : %d rs.\n", b1.price);
    printf("bottle capacity : %.1f liter\n", b1.capacity);
}