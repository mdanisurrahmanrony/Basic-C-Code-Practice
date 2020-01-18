#include<stdio.h>
int main ()
{
    int a,b,c,d,e,total;
    float average,a1,b1,c1,d1,e1;

    printf("please enter the five marks");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    total=a+b+c+d+e;
    average=total/5;

    printf("the average mark is %f \n",average);

    a1=(100*a)/total;
    b1=(100*b)/total;
    c1=(100*c)/total;
    d1=(100*d)/total;
    e1=(100*e)/total;



    printf("the parcentage of these marks are \n%f\n%f\n%f\n%f\n%f\n",a1,b1,c1,d1,e1);
    


}
