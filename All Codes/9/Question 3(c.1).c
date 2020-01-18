#include<stdio.h>
void main()
{
int date, month, year;
printf("Enter Date, Month and Year: \n");
scanf("%d %d %d", &date, &month, &year);
if(month==01&&month==1)
{
printf("January %d, %d",date,year);
}
else if(month==02&&month==2)
{
printf("February %d, %d",date,year);
}
else if(month==03&&month==3)
{
printf("March %d, %d",date,year);
}
else if(month==04&&month==4)
{
printf("April %d, %d",date,year);
}
else if(month==05&&month==5)
{
printf("May %d, %d",date,year);
}
else if(month==06&&month==6)
{
printf("June %d, %d",date,year);
}
else if(month==07&&month==7)
{
printf("July %d, %d",date,year);
}
else if(month==8)
{
printf("August %d, %d",date,year);
}
else if(month==9)
{
printf("September %d, %d",date,year);
}
else if(month==10)
{
printf("October %d, %d",date,year);
}
else if(month==11)
{
printf("November %d, %d",date,year);
}
else if(month==12)
{
printf("December %d, %d",date,year);
}
else
{
printf("Please input the month 2nd.");
}
}
