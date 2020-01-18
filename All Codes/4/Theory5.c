#include<stdio.h>
void main ()
{
   int a;
   printf("enter value of a:\n");
   scanf("%d",&a);
   if (a%3==0)
   printf("a is divisible by 3:\n");
   else if (a%5==0)
   printf("a is divisible by 5:\n");
   else if (a%7==0)
   printf("a is divisible by 7:\n");
   else if (a%2==0)
   printf("a is divisible by 2:\n");
   else if (a%3==0 && a%5==0 && a%7==0 && a%2==0)
   printf("a is divisible by all:\n");
   else
   printf("a is divisible by none");

}
