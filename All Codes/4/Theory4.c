#include<stdio.h>
void main()
{
 int a,b,c,d;
 printf ("enter value gradually of a,b,c,d");
 scanf ("%d%d%d%d",&a,&b,&c,&d);
 if (a>b && a>c && a>d)
 printf ("a is maximum");
 else if (b>a && b>c && b>d)
 printf ("b is maximum");
  else if (c>a && c>b && c>d)
 printf ("c is maximum");
 else if (d>a && d>b && d>c)
 printf ("d is maximum");
 else
 printf ("all are equal");
}
