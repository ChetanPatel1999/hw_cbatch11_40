// wap to check given number is positive or nagative using switch case
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // -12
    switch(num>0)
    {
      case 1 :printf("number is positive");break;
      case 0 :printf("num is nagative");break;
    }
}