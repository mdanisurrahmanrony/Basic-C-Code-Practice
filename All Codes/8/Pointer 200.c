#include<stdio.h>
void main()
{
 int marks[3]={10,20,30};
 int sum=0,i;
 int *points[3];
 for (i=0;i<3;++i)
 {
     points[i]=&marks[i];
     sum+=marks[i];
 }
 for (i=0;i<3;++i)
 {
     printf("\n%p",--points[i]);
 }
}

