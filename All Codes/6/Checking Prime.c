#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,ans;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for (i=2;i<=num/2;i++)
    {
     ans=num%i;
     if (ans==0)
     {
         printf("\nNot a prime number");
         getch();
         goto end;
     }
    }
}
