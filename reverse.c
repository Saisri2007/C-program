/*write a c program to print the reverse of the given number*/
#include<stdio.h>
int main()
{
	int num,rev=0,rem;
	printf("enter any positive integer numbers");
	scanf("%d",&num);
	while(num !=0) //153  15  1
	{
		rem=num%10;  //3   5  1
		rev=rev*10+rem; //3  35  351
		num=num/10;  //15  1  0
	}
	printf("the reverse of a given number is %d",rev);
}