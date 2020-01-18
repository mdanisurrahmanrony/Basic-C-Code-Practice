/*Using a function, find out whether a year is leap year or not*/
#include<stdio.h>
#include<conio.h>
main()
{
    int year;
    printf("Enter year :\n");
    scanf("%d",&year);
    leapyear(year);
    getch();
}
leapyear(int year)
{
    if(year%4==0 && year%100!=0 || year%400==0)
        printf("\n%d is leap year",year);
    else
        printf("\n%d is not a leap year",year);
}
