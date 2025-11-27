#include<stdio.h>
int main()
{   float deci;
	char ch;
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	printf("Enter a character");
	scanf("%c",&ch);
	printf("Enter a real number");
	scanf("%f",&deci);
	printf("number is %d\ncharacter is %c\nreal number is %f\f",num,ch,deci);
	return 0;
}