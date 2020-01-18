#include<stdio.h>
void main()
{
    int i,num=0;
    float sum=0, average;
    printf ("Input the marks, -1 at the end\n");
    scanf ("%d",&i);
    while (i!=-1)
    {
        sum+=i;
        num++;
        scanf ("%d",&i);

    }
    average=sum/num;
    printf ("The average is %.2f", average);
}
