#include<stdio.h>
void main ()
{
 float income,income_tax,salary;
 printf ("enter value of income\n");
 scanf ("%f",&income);
 income_tax=income*.3;
 salary=income-income_tax;
 printf("value of salary is %f",salary);
}

