#include<stdio.h>
void main ()
{
int a,b,c,d,e,f,g,h,i,j,total,average;
printf ("enter value gradually a,b,c,d,e,f,g,h,i,j\n");
scanf ("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
total=a+b+c+d+e+f+g+h+i+j;
printf ("sum of all marks is %d:\n",total);
average=total/10;
printf ("average of all marks is %d:\n",average);
if (average>=80)
printf ("The average is A+");
if (average>=80 && average<=100)
printf ("The average is A+");
else if (average>=75 && average<=79)
printf ("The average is A");
else if (average>=70 && average<=74)
printf ("The average is A-");
else if (average>=65 && average<=69)
printf ("The average is B+");
else if (average>=60 && average<=64)
printf ("The average is B");
else if (average>=55 && average<=59)
printf ("The average is B-");
else if (average>=50 && average<=54)
printf ("The average is C+");
else if (average>=45 && average<=49)
printf ("The average is C");
else if (average>=40 && average<=44)
printf ("The average is D");
else if (average<40 && average>=0)
printf ("The average is F");
else
printf ("The average is none of this");

}
