#include<stdio.h>
void main()
{
    int i,sum_of_pos=0,sum_of_pos_sq=0;
    for (i=29;i>=1;i-=2)
    {
        sum_of_pos+=i;
        sum_of_pos_sq+=i*i;
    }
    printf("sum of positive numbers %d:\n",sum_of_pos);
    printf("sum of square of positive numbers %d:\n",sum_of_pos_sq);

}

