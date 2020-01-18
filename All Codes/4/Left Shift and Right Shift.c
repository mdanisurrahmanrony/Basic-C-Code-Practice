#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter value of a,b:\n");
    scanf("%d%d",&a,&b);
    c= a<<3;
    d= a>>2;
    printf("Left shift is %d\n",c);
    printf("Right shift is %d",d);
}
