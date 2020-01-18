
#include<stdio.h>

int main()

{
    int a[10],b[10],i,j;
    printf("\n Enter an Element : ");

    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=9; i<10; i++,j++)
    {
        b[i]=a[j];
    }
    printf("\n Array Afte coping inverse order : ");
    for(i=0; i<10; i++)
    {
        printf("%2d ",b[i]);
    }

    return 0;
}
