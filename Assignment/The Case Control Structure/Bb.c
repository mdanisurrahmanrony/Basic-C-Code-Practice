#include<stdio.h>
int main()
{
    int temp;
    scanf("%d",&temp);
    switch (temp)
    {
    case (temp = 20):
        printf("Oooooohhh ! Damn cool\n");
    case (temp >20 && temp<=30):
        printf("Rain rain here again\n");
    case(temp>30 && temp <=40):
        printf("Wish i am on evers\n");
    default:
        printf("Good old nagpur weather\n");
    }
    return 0;
}
