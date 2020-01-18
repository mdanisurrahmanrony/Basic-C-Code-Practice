/*Obtain Prime factors of a number*/
#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    printf("Enter number: \n");
    scanf("%d",&num);
    prime(num);
    getch();
}
prime(int num)
{
    int i=2;
    printf ("\nprime factors of %d are: \n",num);
    while (num!=1)
    {
        if(num%i==0)
            printf("%d",i);
        else
        {
            i++;
            continue;
        }
        num=num/i;
    }
}
