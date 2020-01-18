#include<stdio.h>
#include<math.h>

void main()
{
float arr[10][2]={
3.0,1.5,
4.5,2.0,
5.5,3.5,
6.5,5.0,
7.5,6.0,
8.5,7.5,
8.0,9.0,
9.0,10.5,
9.5,12.0,
10.0,14.0
};

int i,j;
float sx=0,sy=0,sx2=0,sxy=0,my,mx,a,b;

/* for(i=0;i<10;i++)
{
for(j=0;j<2;j++)
{
printf("\nKey in the [%d][%d] value",i+1,j+1);
scanf("%f",&arr[i][j]);
}
}
*/
/*calculating summation x*/

for(i=0;i<10;i++)
sx=sx+arr[i][0];

/*calculating summation y*/
for(i=0;i<10;i++)
sy=sy+arr[i][1];

/*calculating summation x2*/

for(i=0;i<10;i++)
sx2=sx2+(arr[i][0]*arr[i][0]);


/*calculating summation xy*/

for(i=0;i<10;i++)
sxy=sxy+(arr[i][0]*arr[i][1]);

my=sy/i;
mx=sx/i;

b=((i*sxy)-(sx*sy))/((i*sx2)-(sx*sx));
a=my-(b*mx);

printf("\nThe value of a is %f\nThe value of b is %f",a,b);
}
