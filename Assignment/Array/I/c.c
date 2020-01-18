#include<stdio.h>

void main()
{
      int a[10],*p,i,min;

      p=&a[0];
      printf("\nEnter 10 Elements : ");
      for(i=0;i<10;i++,p++)
            scanf("%d",p);
      p=&a[0];
      min=*p;
      for(i=0;i<10;i++,p++)
            if(*p<min)
                  min=*p;
      printf("\nSmallest Element : %d",min);
      getch();
}
