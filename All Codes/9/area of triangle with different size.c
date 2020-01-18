#include <stdio.h>
void main()
{
    int a,b,c;
    float area,x,p;

    printf("please enter the perimeter values\n");
    scanf("%d%d%d",&a,&b,&c);

    p=(a+b+c)/2;
    x=p*(p-a)*(p-b)*(p-c);
    area=sqrt(x);

    printf("the area of the triangle is %f \n",area);
    printf("____THANK YOU____");
}
