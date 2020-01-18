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
if (choice == 1)
  {
    printf ("\n Mercury is closest to sun");
    printf ("\n Quite bad weather");
    printf ("\n Expensive to go");
  }
   else if ( choice==2 )
   {

    printf ("\n Venus is second to sun");
    printf ("\n Bad weather too");
    printf ("\n Less expensive than mercury");
   }
    else if ( choice==3 )
    {
    printf ("\n Mars is closest to earth");
    printf ("\n Weather is better");
    printf ("\n Cheap to go");
    }
    else
    printf("\n unknown destination");
    printf("\n Bye Bye");
}

