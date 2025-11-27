/*Write a c program to print the pascal triangle*/
#include<stdio.h>//
int main()
{
	int i,j,val,rows;
	printf("Enter the no.of rows");
	scanf("%d ",&rows);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows;j++)
	    	printf("  ");
	    	val=1;
	    for(j=0;j<=i;j++)
		{
			printf("%d",val);
			val=val*(i-j)/(j+1);
		}
		printf("\n");
	}
}