//wap to take two value from user
//and display sum.
#include<stdio.h>
void main()
{
	float num1,num2,num3;
	printf("this is addition programm..\n");
	printf("enter frist value : ");
	scanf("%f",&num1);
	printf("enter second value : ");
	scanf("%f",&num2);
	num3=num1+num2;
	printf("sum of %.1f and %.1f = %.1f",num1,num2,num3);
}
