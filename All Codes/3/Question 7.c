#include<stdio.h>
void main()
{
    int x,y,a,b,c,d,e,f,g,h;
    x=a^2+b^2,y=a*b;
    printf ("Enter the value of x\n");
    scanf ("%d",&x);
    printf ("Enter the value of y:\n");
    scanf ("%d,&y");
    //Considering a^2+b^2=x,ab=y
    c=x+(2*y);//(a+b)^2=a^2+b^2+2ab
    d=x-(2*y);//(a-b)^2=a^2+b^2-2ab
    e=sqrt(c);//e=a+b
    f=sqrt(d);//f=a-b
    g=(e+f)/2;
    h=(e-f)/2;
    printf ("value of g is %d:\n",g);
    printf ("value of h is %d",h);
}
