#include<stdio.h>
#include<conio.h>
#include<string.h>

void main() {

char str[100];
int i;

printf("Enter the string: \n\n");

gets(str);

i=atoi(str);  /* 'atoi' is a function to convert a string into an integer */

printf("%d",i);


}

