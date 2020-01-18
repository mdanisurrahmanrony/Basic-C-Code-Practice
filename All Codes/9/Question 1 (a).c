#include<stdio.h>
int getSum(int n)
{
    if (n==1)
    {
        return 1;
    }
    return n + getSum(n-1);
}
int main()
{
    printf("%d\n",getSum(6));
    return 0;
}
