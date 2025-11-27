/*write a c program to find the maximum and minimum elements of an array*/
#include<stdio.h>
int main()
{
	int a[10],i,min,max,n;
	printf("\n Enter the size of an array");
	scanf("%d",&n);
	printf("\n Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("\n Min and Max elements are %d %d",min,max);
}