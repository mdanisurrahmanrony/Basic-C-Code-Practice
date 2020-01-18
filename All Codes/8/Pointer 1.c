#include<stdio.h>
void main()
{
 int a=10;
 int *p1;
 int **p2;
 int ***p3;
 p1=&a;
 p2=&p1;
 p3=&p2;
 printf("\n%d",a);
 printf("\n%d",*p1);
 printf("\n%d",**p2);
 printf("\n%d",***p3);
}
