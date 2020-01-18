#include<stdio.h>
void main ()
{
 int a,b,c,d,e,total;
 float average,a1,b1,c1,d1,e1;
 printf("enter value of a,b,c,d,e:\n");
 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 total=a+b+c+d+e;
 average=total/5;
 printf("total is %d:\n",total);
 printf("average is %f:\n",average);
 a1=(a*100)/total;
 b1=(b*100)/total;
 c1=(c*100)/total;
 d1=(d*100)/total;
 e1=(e*100)/total;
 printf("percentage of them are %f%f%f%f%f:\n",a1,b1,c1,d1,e1);
}
