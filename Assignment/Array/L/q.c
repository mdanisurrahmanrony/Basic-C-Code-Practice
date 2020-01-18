#include<stdio.h>
#include<math.h>

void main()
{
float arr[11][2]={
34.22,102.43,
39.87,100.93,
41.85,97.43,
43.23,97.81,
40.06,98.32,
53.29,98.32,
53.29,100.07,
54.14,97.08,
49.12,91.59,
40.71,94.85,
55.15,94.65
};
int i,j;
float sx=0,sy=0,sx2=0,sy2=0,sxy=0,b,r;


/*calculating summation x*/

for(i=0;i<11;i++)
sx=sx+arr[i][0];
printf("\nsummation x is %f",sx);
/*calculating summation y*/

for(i=0;i<11;i++)
sy=sy+arr[i][1];
printf("\nsummation y is %f",sy);
/*calculating summation x2*/

for(i=0;i<11;i++)
sx2=sx2+(arr[i][0]*arr[i][0]);
printf("\nsummation x2 is %f",sx2);
/*calculating summation y2*/

for(i=0;i<11;i++)
sy2=sy2+(arr[i][1]*arr[i][1]);
printf("\nsummation sy2 is %f",sy2);
/*calculating summation xy*/

for(i=0;i<11;i++)
sxy=sxy+(arr[i][0]*arr[i][1]);
printf("\nsummation sxy is %f",sxy);

/*calculating bottom part*/
b=(i*sx2-(sx*sx))*(i*sy2-(sy*sy));
printf("\nbottom is %f",b);

/*calculating coefficient r*/

r=(sxy-(sx*sy))/(sqrt(b));

printf("\n The correlation coefficient is %f",r);
}
