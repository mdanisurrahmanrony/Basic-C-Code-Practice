
#include<stdio.h>

void main()
{
    int arr[25];
    int i,*j,k;
    j=arr;

    printf("\nInput 25 integers");

    for(i=0;i<25;i++,j++)
    {
    printf("\nKey in the %d) value",i+1);
    scanf("%d",&*j);
    }


    for(i=0;i<25;i++)
    {
    for(k=24;k>i;k--)
    if(arr[i]==arr[k])
    printf("\nArray [%d] = Array[%d]",i,k);
    }
}
