//constant 
#include<stdio.h>
void main()
{
  const float pi=3.141;
  float radius,area;
  printf("enter radius : ");
  scanf("%f",&radius);
  area=pi*radius*radius;
  printf("area of circle which radius %.1f = %.1f",radius,area);
  
}
