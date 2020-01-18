#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("Enter value of a,b,c,d,e:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    b+=a;
    c-=a;
    d*=a;
    e/=a;
    printf("Value of b is %d\n",b);
    printf("Value of c is %d\n",c);
    printf("Value of d is %d\n",d);
    printf("Value of e is %d",e);
}
