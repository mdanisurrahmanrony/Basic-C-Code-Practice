#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    printf("Enter a string:\n");
    gets(a);
    strrev(a);
    printf("Reverse of a string is: %s",a);
}
