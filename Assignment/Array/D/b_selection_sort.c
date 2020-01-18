// Selection Sort

#include<stdio.h>

int main()

{
    int a[25],i,j,t;

    printf("\n Enter 25 numbers : ");
    for(i=0; i<=24; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<=23; i++)
    {
        for(j=i+1; j<=24; j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    printf("\n Sorted Numbers are : \n");
    for(i=0; i<=24; i++)
    {
        printf("%3d ",a[i]);
    }
    printf("\n\n\n Press any key to exit \n\n");

    return 0;
}
