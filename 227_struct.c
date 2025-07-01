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
    struct bottle b1, b2 = {"pink", 180, 1.00}, b3 = {.price = 1200, .capacity = 5.00, .color = "white"};
    // printf("size of b1 = %d\n",sizeof(b1));

    strcpy(b1.color, "blue");
    b1.price = 19;
    b1.capacity = 1.00;

    printf("bottle1 info : \n");
    printf("bottle color : %s\n", b1.color);
    printf("bottle price : %d rs.\n", b1.price);
    printf("bottle capacity : %.1f liter\n", b1.capacity);

    printf("-------------------------------\n");
    printf("bottle2 info : \n");
    printf("bottle color : %s\n", b2.color);
    printf("bottle price : %d rs.\n", b2.price);
    printf("bottle capacity : %.1f liter\n", b2.capacity);

    printf("-------------------------------\n");
    printf("bottle3 info : \n");
    printf("bottle color : %s\n", b3.color);
    printf("bottle price : %d rs.\n", b3.price);
    printf("bottle capacity : %.1f liter\n", b3.capacity);
}