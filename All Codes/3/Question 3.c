#include<stdio.h>
void main ()
{
 float fahrenheit,celsius;
 celsius=((fahrenheit-32)/9)*5;
 printf("enter value in fahrenheit");
 scanf("%f",&fahrenheit);
 printf("celsius is %f",celsius);
 fahrenheit=((9*celsius)/5)+32;
 printf("\n enter value in celsius");
 scanf("%f",&celsius);
 printf("fahrenheit is %f",fahrenheit);
}

