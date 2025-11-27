#include<stdio.h>
int main()
{
	int num;
	char digit;
	float f;
	printf("enter any character");
	scanf("%c" ,&digit);

	printf("enter an integer");
	scanf("%d" ,&num);
	
	printf("enter any decimal number");
	scanf("%f" ,&f);
	
	printf("character value is %c\nInteger value is %d\ndecimal value is%d\f" ,digit,num,f);
	return 0;
}