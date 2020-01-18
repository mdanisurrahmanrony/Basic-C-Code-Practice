#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    printf("Enter a string\n");
    gets(a);
    printf("Enter b string\n");
    gets(b);
    strcat(a,b);
    printf("String after concatenation %s",a);
}
