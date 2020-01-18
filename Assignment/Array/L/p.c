
#include<stdio.h>
#include<math.h>

void main()
{
float arr[6][3];
int i,j,d;
float area,c=0;

for(i=0;i<6;i++)
{
for(j=0;j<3;j++)
{
printf("\nKey in the [%d][%d] value",i+1,j+1);
scanf("%f",&arr[i][j]);
}
}

for(i=0;i<6;i++)


{

area=(1.0/2.0)*arr[i][0]*arr[i][1]*sin(arr[i][2]);

if(area>c)
{ printf("\n1");
c=area;
d=i;
}
}

printf("\nThe biggest plot of land is plot no. %d with area %f",d+1,c);
}
