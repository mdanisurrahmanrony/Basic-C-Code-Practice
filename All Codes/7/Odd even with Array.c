#include<stdio.h>
void main()
{
    int arr[100],i,n;
    printf("how many numbers want to enter\n");
    scanf("%d", &n);
    printf("enter elements in array\n");
    for(i=0;i<n;i++)
    {
      scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
      if(arr[i] % 2 == 0)
       {
        printf("\neven number is %d", arr[i]);
       }
    else
      {
        printf("\nodd is %d", arr[i]);
      }
    }
}
