/*write a c program to search an element in a list by using linear search*/
#include<stdio.h>
int main()
{
	int a[10],i,target,found=0;
	printf("Enter any 10 integer numbers");
	for(i=0;i<10;i++)
	
		scanf("%d",&a[i]);
	printf("\nEnter an element to be searched");
		scanf("%d",&target);
	
	for(i=0;i<10;i++)
	{
		if(target == a[i])
			{
				found=1;
				break;
			}
	}
	if(found==1)
		{
			printf("Element %d is found",target);
		}
	else
		{
			printf("Element %d is not found",target);
		}
}