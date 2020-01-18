#include<stdio.h>
void main ()
{
 float a,b,c,s,e,area;
 printf("enter 3 sides a,b,c");
 scanf("%f%f%f",&a,&b,&c);
 s=(a+b+c)/2;
 e=s*(s-a)*(s-b)*(s-c);
 area=sqrt(e);
 printf("area is %f",area);
}

