/*write a c program to perform bit-wise operators*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two integer numbers");
	scanf("%d%d",&a,&b);
	
	printf("\nBitwise operators of %d & %d = %d",a,b,a&b);
	printf("\nBitwise operators of %d | %d = %d",a,b,a|b);
	printf("\nBitwise operators of %d ^ %d = %d",a,b,a^b);
	printf("\nBitwise operators of %d << %d = %d",a,b,a<<b);
	printf("\nBitwise operators of %d >> %d = %d",a,b,a>>b);
	
}