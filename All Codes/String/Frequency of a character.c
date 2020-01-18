#include<stdio.h>
int main()
{
    char c[100],ch;
    int i,count=0;
    printf("Enter the string :\n");
    gets(c);
    printf("Enter the character :\n");
    scanf("%c",&ch);
    for(i=0;c[i]='\0';++i)
    {
        if (ch==c[i])
        ++count;
    }
    printf("The frequency of the character in this string is %c=%d",ch,count);
    return 0;
}
