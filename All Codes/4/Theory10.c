#include<stdio.h>
void main()
{
    int i,sum_of_pos=30;
    for (i=30;i>=0;i--)
    {
        sum_of_pos+=i;
    }
    printf("sum of positive numbers %d:\n",sum_of_pos);

}
