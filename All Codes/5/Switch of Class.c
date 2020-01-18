#include<stdio.h>
void main()
{
int choice;
printf ("choice of destination:\n");
printf ("\t 1. Mercury\n");
printf ("\t 2. Mercury\n");
printf ("\t 3. Mercury\n");
printf ("\Enter your choice:\n");
scanf ("%d",&choice);
switch (choice)
{
    case 1:
    printf ("\n Mercury is closest to sun");
    printf ("\n Quite bad weather");
    printf ("\n Expensive to go");
    break;
    case 2:
    printf ("\n Venus is second to sun");
    printf ("\n Bad weather too");
    printf ("\n Less expensive than mercury");
    break;
    case 3:
    printf ("\n Mars is closest to earth");
    printf ("\n Weather is better");
    printf ("\n Cheap to go");
    break;
    default :
    printf ("\n unknown destination");
}
printf ("Bye Bye");
}
