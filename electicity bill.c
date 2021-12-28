#include<stdio.h>
void main()
{
	float units,bill;
	printf("enter the consumed units : ");
	scanf("%f",&units);
	if ( units<=199)
	{ 
	bill=units*1.20;
	printf("the bill is %.2f",bill);
	if(bill>400)
	{
		printf(" \nthe surcharge is %.2f",bill*15/100);
		printf("\n the total bill is %.2f",bill+(bill*15/100));
	}
	}
	else if ( units>=200 && units<400)
	{
		bill=units*1.50;
		printf("the bill is %.2f",bill);
		if(bill>400)
	{
		printf(" \nthe surcharge is %.2f",bill*15/100);
		printf("\nthe total bill is %.2f",bill+(bill*15/100));
	}
	}
	else if (units>=400 && units<600)
	{
		bill=units*1.80;
		printf("the bill is %.2f",bill);
		if(bill>400)
	{
		printf(" \nthe surcharge is %.2f",bill*15/100);
		printf("\nthe total bill is %.2f",bill+(bill*15/100));
	}
	}
	else
	{
		bill=units*2;
		printf("the bill is %.2f",bill);if(bill>400)
	{
		printf(" \nthe surcharge is %.2f",bill*15/100);
		printf("\nthe total bill is %.2f",bill+(bill*15/100));
	}
	}
}
