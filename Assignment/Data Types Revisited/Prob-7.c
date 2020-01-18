#include<stdio.h>
float x=4.5;
float f(float);
main()
{
   float y;
   x*=2.0;
   y=f(x);
   printf("\n%f\n%f",x,y);
}
float f(float a)
{
    a+=1.3;
    x-=4.5;
    return(a+x);
}

