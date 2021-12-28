#include<stdio.h>
void main()
{
	float units,bill,sur=0.00;
	printf("enter the consumed units : ");
	scanf("%f",&units);
	if ( units<=199)
	{ 
	bill=units*1.20;
	}
	else if ( units>=200 && units<400)
	{
		bill=units*1.50;
	}
	else if (units>=400 && units<600)
	{
		bill=units*1.80;
	}
	else
	{
		bill=units*2.00;
	}
	if( bill>400)
	{
		sur=bill*0.15;
	}
	printf("the bill is %.2f",bill);
	printf("\nthe surcharge is %.2f",sur);
	printf("\nthe total net bill is %.2f",bill+sur);
}
