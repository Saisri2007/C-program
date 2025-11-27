/* write a c program to find the LCM of two numbers using recursion*/
#include<stdio.h>
int lcm(int ,int );
int main()
{
	int n1,n2,result;
	printf("Enter two integer numbers");
	scanf("%d %d",&n1,&n2);
	
	if(n1>n2)
		result= lcm(n2,n1);
	else
		result= lcm(n1,n2);
	printf("\nLCM is %d",result);
}
int lcm(int a,int b)	// 2 4
{
	static int temp=0;
	temp=temp+b;	//4 6 12 18 24 30
	if(temp%a == 0 && temp%b == 0 )
		return temp;
	else
		return lcm(a,b);
}