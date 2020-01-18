#include<stdio.h>
void main()
{
    char a[100];
    int i,v=0,c=0;
    printf("Enter the word: \n");
    gets(a);
    for(i=0;a[i]!='\0';++i)
    {
        if((a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
            ++v;
        else if(a[i]>='A' && a[i]<= 'Z')
            ++c;
    }
    printf("%d vowels and %d consonants\n",v,c);
}
