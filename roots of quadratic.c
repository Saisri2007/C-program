/*write a c program to print the roots of quadratic equation*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float r1,r2,real,img;
	printf("Enter any three integer numbers");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		printf("\nRoots are real");
		r1=(-b+sqrt(d))/2*a;
		r1=(-b-sqrt(d))/2*a;
		printf("r1=%f,r2=%f",r1,r2);
		
	}
	else if(d==0)
	{
		printf("\nRoots are equal");
		r1=-b/2*a;
		r2=-b/2*a;
		printf("r1=%f,r2=%f",r1,r2);	
	}
	else
	{ 
	    printf("\nRoots are imaginary");
	    real=-b/2*a;
	    img=sqrt(d)/2*a;
	    printf("r1=%f+%fi,r2=%f-%fi",real,img,real,img);
	    
	}
	
	
	
}