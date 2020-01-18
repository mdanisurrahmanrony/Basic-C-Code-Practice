/*Calculate sum of digits of a five-digit number with/without recursion*/
#include<stdio.h>
#include<conio.h>
main()
{
    int s,rs;
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    s=sum(n);
    printf("\nSum digits without using recursion is %d",s);
    rs=rsum(n);
    printf("\n\nSum of digits using recursion is %d",rs);
    printf("\n\n\n\n\nPress any key to exit...");
    getch();
}
sum (int num)
{
    int remainder, sum=0;
    while (num>0)
    {
        remainder=num%10;
        sum=sum+remainder;
        num=num/10;
    }
    return (sum);
}
rsum (int num)
{
    int sum=0;
    int remainder;
    if(num!=0)
    {
        remainder=num%10;
        sum=remainder+rsum(num/10);
    }
    return sum;
}
