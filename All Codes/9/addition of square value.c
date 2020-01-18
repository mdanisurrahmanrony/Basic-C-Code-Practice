#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,g,h;
    printf("enter the value of a^2+b^2");
    scanf("%d",&a);
    printf("\nenter the value of ab:");
    scanf("%d",&b);
    //considering a^2+b^2=a,ab=b
    c=a+(2*b);//(a+b)^2=a^2+b^2+2ab
    d=a-(2*b);//(a-b)^2=a^2+b^2-2ab
    e=sqrt(c);//e=a+b
    f=sqrt(d);//f=a-b
    g=(e+f)/2;
    h=(e-f)/2;
    printf("a=%d\tb=%d",g,h);
}
