#include<stdio.h>
void main()
{
    char line[150];
    int i,v,c,ch,d,s,o;
    o=v=c=ch=d=s=0;
    printf("Enter a line of string\n");
    gets(line);
    for (i=0;line[i]!='\0';++i)
    {
        if(line[i=='a'] || line[i]=='e' ||  line[i]=='i' ||  line[i]=='o' ||  line[i]=='u' ||  line[i]=='A' ||  line[i]=='E' ||  line[i]=='I' ||  line[i]=='O' ||  line[i]=='U' )
        ++v;
        if ((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line <= 'Z'))
        ++c;
        if (line[i]>='0' && line[i]<='9')
        ++d;
        if(line[i]==' ')
        ++s;

    }
    printf("Vowels :%d",v);
    printf("\nConsonants :%d",c);
    printf("\nDigits :%d",d);
    printf("\nWhite Spaces :%d",s);
}
