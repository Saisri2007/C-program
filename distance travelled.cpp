/* write a c program to find the distance travelled by an object*/
#include<stdio.h>
int main()
{
	int dist,vel,time,acc;
	printf("Enter velocity,acceleration and time");
	scanf("%d%d%d",&vel,&acc,&time);

	dist=(vel*time)+(acc*time*time)/2.0;
	printf("\nThe distance travelled is %d",dist);
   	
}