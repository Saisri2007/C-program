/* write a c program  to print whether the given number is palindrome or not */
#include<stdio.h>
int main()
{
	int num,rev=0,rem,temp;
	printf("Enter any positive integer number");
	scanf("%d",&num);
	temp=num;
	while(num != 0)
	{
		rem = num % 10;
		rev = rev*10+rem;
		num = num / 10;
	}
	if (temp==rev)
    	printf("The given number is palandrome %d ",temp);
	else
	    printf("The given number is not palindrome %d",temp);
}