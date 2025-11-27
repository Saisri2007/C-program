/*write a c program to perform multiplication of two matrices*/
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2;
	printf("Enter the size of Matrix A");
	scanf("%d %d",&r1,&c1);
	printf("Enter the size of Matrix B");
	scanf("%d %d",&r2,&c2);
	
	printf("Enter the elements of Matrix A");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the elements of Matrix B");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(r2!=c1)
	{
 		printf("Matrix multiplication is not possible...");
	} 
	else
	{
		printf("\nThe result of Matrix C is");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<r2;k++)
				{
			  	 	c[i][j]=c[i][j] + a[i][k]*b[k][j];
			   
		    	}
		    	printf("%d ",c[i][j]); 
			}
			printf("\n");
		}
}
}