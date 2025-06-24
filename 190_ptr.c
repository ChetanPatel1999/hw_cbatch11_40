// when we increase a pointer value by 1 so pointer value increse by 4
//  if pointer type is integer.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("value of a = %d\n", *ptr); // 12
    printf("adress of a = %d\n", &a);  // 6487572
    printf("adress of a = %d\n", ptr); // 6487572
    ptr=ptr+1; // ptr++
    printf("adress of a = %d\n", ptr);  // 6487576
    printf("adress of a = %d\n", &a);   // 6487572
    printf("adress of a = %d\n", *ptr); // garbage value
}