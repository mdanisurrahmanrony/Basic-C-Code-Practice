/*Program to find product of float and integer*/
#include<stdio.h>
#include<conio.h>
main()
{
    int x;
    float y,prod;
    float product (int,float);/*Function Prototype*/
    printf("Enter float value and integer value: \n");
    scanf("%f%d",&y,&x);
    prod=product(x,y);/*Function call*/
    printf("Product of %f and %d=%f",y,x,prod);
    getch();
}
float product(int x, float y)
{
    float p;
    p=x*y;
    return(p);
}
