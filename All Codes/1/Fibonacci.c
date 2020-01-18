#include<stdio.h>
void main()
{
    int a=0,b=1,i;
    printf("Value of a,b is:\n%d\n",a,b);
    for(i=0;i<=50;i++)
    {
        i=a+b;
        a=b;
        b=i;

        printf("%d\n",i);
    }
}
