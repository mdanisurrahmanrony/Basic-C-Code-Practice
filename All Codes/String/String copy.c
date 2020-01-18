#include<stdio.h>
#include<string.h>
void main()
{
 char source[100],destination[100];
 printf("Enter source string :");
 gets(source);
 strcpy(destination,source);
 printf("Source string is %s\n",source);
 printf("Destination string is %s\n",destination);
}
