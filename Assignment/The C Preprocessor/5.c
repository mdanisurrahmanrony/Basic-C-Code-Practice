#include<stdio.h>
#include<conio.h>
#define ISUPPER(x)(x>=65 && x<=90 ? 1:0)
#define ISLOWER(x)(x>=97 && x<=122 ? 1:0)
#define ISALPHA(x)(ISUPPER(x)||ISLOWER(x))
#define BIG(x,y)(x>y?x:y)
main(){
char ch;
int d,a,b;
printf("Enter Any Alphabet/Charecter");
scanf("%c",&ch);
if(d=ISUPPER(ch)==1)
    printf("\nYOu Entered A Capital Letter");
else if(d=ISLOWER(ch)==1)
    printf("\nYOu Entered A Small Case Letter");
else if(d=ISALPHA(ch)!=1)
    printf("\nYOu Entered A Charecter Other Than A Alphabet");
printf("\n\nEntered Any Two Numbers");
scanf("%d%d",&a,&b);
d=BIG(a,b);
printf("\nBigger Number Is %d",d);
printf("\n\n\n\nPress Any Key TO Exist");
getch();
}
