#include<stdio.h>
void main()
{
    int a=0,b=1,i;

    for(i=0;i<=50;i++)
    {
        i=a+b;
        a=b;
        b=i;

        printf("%d\n",i);
    }
}
