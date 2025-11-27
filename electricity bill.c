/* write a c program to generate the electricity bill based on the following information*/
#include<stdio.h>
int main()
{
	int units;
	float uc,charge,total;
	printf("Enter the no of units consumed");
	scanf("%d",&units);
	if(units<=50)
	{
		uc= units * 2.50;
		charge= 30.00;
	}
	else if (units>=51 && units<=100)
	{
		uc= units *3.0;
		charge= 50.0;
	}
	else if (units>=101 && units<=200)
	{
		uc= units * 3.5;
		charge= 75.0;

	}
	else if (units>=201 && units<=300)
	{
		uc=units * 4.0;
		charge= 100.0;
	}
	else 
	{
		uc=units * 5.0;
		charge= 125.0;
	}
	total= uc + charge;
	printf(" The total electricity bill amount is %f",total);
	
	
	
}