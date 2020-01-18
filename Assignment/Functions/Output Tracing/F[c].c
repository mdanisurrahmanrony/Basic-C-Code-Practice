#include<stdio.h>
float area (int, int, int);
int main()
{
    int a,b,c,k;
    printf("Enter value of three sides: \n");
    scanf("%d\n%d\nd%\n",&a,&b,&c);
    k = area(a ,b , c);
    printf("The area is %f",k);
    return 0;
}
float area (int x, int y, int z)
{
 int s,m,r;
 s=((x+y+z)/2);
 m=(s*(s-x)*(s-y)*(s-z));
 r=(sqrt(m));
 return r;
}
