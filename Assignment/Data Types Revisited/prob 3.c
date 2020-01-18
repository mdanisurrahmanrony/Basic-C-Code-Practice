#include<stdio.h>
int i=0;
void main()
{
    printf("\nmains i=%d",i);
    i++;
    val();
    printf("\nmains i=%d",i);
    val();
}
val()
{
    i=100;
    printf("\nvals i=%d",i);
    i++;
}
