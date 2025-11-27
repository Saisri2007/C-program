/*write a c program to print where the given matrix is lower triangular matrix or not*/
#include<stdio.h>
int main()
{
	int lt[3][3],i,j,flag=1;
	printf("Enter the elements of Matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&lt[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i<j && lt[i][j]!=0) || (j<=i && lt[i][j]==0))
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
		printf("\nThe given matrix is the lower triangular matrix");
	else
		printf("\nThe given matrix is the not lower triangular matrix");
		
}