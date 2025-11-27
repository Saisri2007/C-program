/*write a c program to calculate simple interest and compound interest*/
#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("enter principle amount");
	scanf("%f",&p);
	
	printf("\nEnter time");
	scanf("%f",&t);
		
	printf("\nEnter rate of interest");
	scanf("%f",&r);
	
	si=(p*t*r)/100.0;
	ci=p*pow(1+r/100,t)-p;
	printf("\nThe simple interest is%f",si);
	printf("\n The compound interest is%f",ci);
}