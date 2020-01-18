//insertatio sort

#include<stdio.h>

int main()

{
    int a[25],i,j,k,t;
    printf("\n Enter 25 numbers : ");

    for(i=0; i<=9; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1; i<=9; i++)
    {
        t=a[j];
        for(j=0; j<i; j++)
        {
            if(t<a[j])
            {
                for(k=1; k>=j; k--)
                {
                    a[k]=a[k-1];
                    a[j]=t;
                    break;
                }
            }
        }
    }
    printf("\n Sorted numbers are : \n");
    for(i=0; i<=9; i++)
    {
        printf("%3d ",a[i]);
    }

    return 0;
}
