#include<stdio.h>
void main ()
{
int marks,i,sum=0,average,n;
printf("Enter no of marks:\n");
scanf ("%d",&n);
for (i=0;i<n;i++)
{
    printf("Enter marks:%d\n",i+1);
    scanf("%d",&marks);
    sum+=marks;
}
average=sum/n;
printf ("average of all marks is %d:\n",average);
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
