#include<stdio.h>

void main()
{

    int choice;
    int i, num, f, n, ck;
    printf("\t 1.Factorial of a number \n");
    printf("\t 2.Prime or not \n");
    printf("\t 3.Odd or even \n");
    printf("\t 4.Exit\n");
    printf("\n\nEnter your choice\n\n");
    scanf("%d",&choice);
    switch(choice){
case 1:
    printf("Enter a number: ");
    scanf("%d",&num);
    f=1;
    i=i;
    while (i<=num){
    i++;
      f=f*i;
    }
  printf("Factorial of %d is: %d",num,f);
    break ;

case 2:
    printf("Enter a Number: ");
    scanf("%d",&n);
    ck=0;
    i=2;
    while (i<=n/2)
    {   ++i;
        if(n%i==0)
        {
            ck=1;
            break ;
        }
    }
    if (ck==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
case 3:
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("%d is even.", num);
        break;
    }
    else
        printf("%d is odd.", num);

case 4:
    exit(0);

     }

    }

