#include<stdio.h>
void main()
{
    int mark[5],n,i,sum=0;
    printf("Enter value n:\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter marks:\n");
        scanf("%d",&mark[i]);
        sum+=mark[i];
    }
    printf("\nThe total marks:%d",sum);
}


