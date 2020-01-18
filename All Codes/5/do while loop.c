#include<stdio.h>
void main ()
{
   int n,num,digit,sum=0,rev=0;
   printf ("Input number:\n");
   scanf ("%d",&num);
   n=num;
   do
   {
   digit=num%10;
   sum+=digit;
   rev=rev*10+digit;
   num/=10;
   }while (num!=0);
   printf ("Sum of digits of numbers=%d\n",sum);
   printf ("Reverse of the numbers=%d\n",rev);
   if(n==rev)
   printf ("The number is palindrome\n");
   else
   printf ("Not palindrome\n");
}
