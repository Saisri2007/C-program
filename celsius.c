/*Write a c program to convert Fahrenheit to Celsius and Celsius to Fahrenheit*/
#include<stdio.h>
int main()
{
    float cel,fah;
    
    printf("enter fahrenheit");
    scanf("%f", &fah);
    cel=(fah-32.0)*5.0/9.0;
    printf("fahrenheit to celsius is %f\n",cel);
    
    printf("\nEnter celsius");
    scanf("%f", &cel);
    fah=cel*(9.0/5.0)+32.0;
    printf("celsius to fahrenheit is %f",fah);

    
}
