//wap to find simple interest.
#include<stdio.h>
void main()
{
	float principle,rate,time,si;
	printf("   simple interest calculater ! \n");
	printf("_________________________________\n\n");
	printf("enter principle ammount : ");
	scanf("%f",&principle);
	printf("enter rate : ");
	scanf("%f",&rate);
	printf("enter time : ");
	scanf("%f",&time);
	si=(principle*rate*time)/100;
	printf("principle ammount : %.2f\n",principle);
	printf("rate : %.2f\n",rate);
	printf("time: %.2f\n",time);
	printf("simple interest : %.2f",si);
}
