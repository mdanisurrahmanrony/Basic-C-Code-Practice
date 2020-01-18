#include <stdio.h>
void main ()
{
    int income;
    float tax,income_tax,sallary;
    printf("please enter your income\n");
    scanf("%d",&income);
    tax=0.3;
    income_tax=income*tax;
    sallary=income-income_tax;
    printf("your net sallary income is %f\n",sallary);
    
}
