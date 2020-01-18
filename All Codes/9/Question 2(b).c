#include<stdio.h>
void main()
{
    int a,b,l;
    printf("Enter two integers: \n");
    scanf("%d\n%d",&a,&b);
    l=larger(a,b);
    printf("Larger value is: %d",l);
}
int larger (int i, int j)
{
    int k;
    k= i>j ? i:j;
    return k;
}
