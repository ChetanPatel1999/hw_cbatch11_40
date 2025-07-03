#include <stdio.h>
#include <string.h>
union bottle
{
    char color[12];
    int price;
    float capacity;
};
void main()
{
    union bottle b1;
    printf("size of b1 = %d\n", sizeof(b1));

    
    b1.price = 19;

    b1.capacity = 1.00;

    strcpy(b1.color, "blue");
    

    printf("bottle1 info : \n");
    printf("bottle color : %s\n", b1.color);
    printf("bottle price : %d rs.\n", b1.price);
    printf("bottle capacity : %.1f liter\n", b1.capacity);
}