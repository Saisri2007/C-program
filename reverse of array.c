/*write a c program to print the reverse of the given array*/
#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter the numbers %d ");
	for(i=0;i<5;i++)
	   {
		 scanf("%d ",&a[i]);
	     
	   }
	for(i=4;i>=0;i--)
	{
		printf("/n the reverse is %d ",a[i]);
	}
}