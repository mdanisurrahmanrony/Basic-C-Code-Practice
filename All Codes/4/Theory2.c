#include<stdio.h>
void main()
{
 int my_age,year;
printf ("Enter value of year:\n");
scanf ("%d",&year);
my_age=year*365*24*3600;
printf ("My age is %d:\n",my_age);
if(year>=1)
printf ("my age is possible");
if(year==0)
printf ("my age is not possible");
}

