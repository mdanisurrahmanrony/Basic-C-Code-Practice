#include<stdio.h>
void main()
{
    int c=3;
    switch (c)
    {
    case '3':
        printf("You never win the silver prize\n");
        break;
    case 3:
        printf("You always lose the gold prize\n");
    default:
        printf("Of course provided you win a prize\n");
    }
    return 0;
}
