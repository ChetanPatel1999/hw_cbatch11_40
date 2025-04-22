//wap to convert weight gram into kg. 
#include<stdio.h>
void main()
{
	float gram,kg;
	printf("enter weight in gram : ");
	scanf("%f",&gram);
    kg=gram/1000;
	printf("weight in kg : %.1f kg",kg);
}
