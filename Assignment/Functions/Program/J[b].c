/*Find the prime factor of a number recursively*/
#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("\nPrime factors are: \n");
    factor(num);
    printf("\n\n\n\n\nPress any key to exit.......");
    getch();
}
factor(int n)
{
    static int i=2;
    if(i<=n)
    {
        if(n%i==0)
        {
            printf("%d",i);
            n=n/i;
        }
        else
            i++;
        factor(n);
    }
    return;
}
