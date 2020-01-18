/*Program to calculate power of a value*/
#include<stdio.h>
#include<conio.h>
main()
{
    int x,y;
    long pow,power();
    scanf("%d%d",&x,&y);
    pow=power(x,y);
    printf("%d to the power %d=%d",x,y,pow);
    getch();
}
long power(int x,int y)
{
  int i;
  long p=1;
  for (i=1;i<=y;i++)
  p=p*x;
  return (p);
}
