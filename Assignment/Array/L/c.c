#include "dos.h"
void main()
{

void creategrid();
int g,c;
int arr[16]={1,4,15,7,8,10,2,11,14,3,6,13,12,9,5,0};
clrscr();
creategrid();
printarray(arr);

for(g=15,c=0;;)
{
int k,a,b,i;
k=getkey();

if(k==80)
{
if((g-4)<0) a="arr[g-4]"; b="arr[g]"; k="="72)>15))
continue;

a=arr[g+4];
b=arr[g];
arr[g+4]=b;
arr[g]=a;
go(g);
printf("%d",arr[g]);
go(g+4);
printf("%c%c",0,0);
go(g+4);
c++;
g+=4;
}

if(k==75)
{
if(g==3g==7g==11g==15)
continue;

a=arr[g+1];
b=arr[g];
arr[g+1]=b;
arr[g]=a;
go(g);
printf("%d",arr[g]);
go(g+1);
printf("%c%c",0,0);
go(g+1);
c++;
g+=1;
}

if(k==77)
{
if(g==0g==4g==8g==12)
continue;

a=arr[g-1];
b=arr[g];
arr[g-1]=b;
arr[g]=a;
go(g);
printf("%d",arr[g]);
go(g-1);
printf("%c%c",0,0);
go(g-1);
c++;
g-=1;
}

for(i=0;i<15;i++)
{
if(arr[i]!=i+1)
break;

if(arr[i]==(i+1)&&i==14)
{
gotoxy(6,24);
printf("\nNumber of moves to complete is %d",c);
exit();
}
}
}


}

go(int g)
{
switch(g)
{
case 0:
gotoxy(8,5);
break;
case 1:
gotoxy(12,5);
break;
case 2:
gotoxy(16,5);
break;
case 3:
gotoxy(20,5);
break;
case 4:
gotoxy(8,9);
break;
case 5:
gotoxy(12,9);
break;
case 6:
gotoxy(16,9);
break;
case 7:
gotoxy(20,9);
break;
case 8:
gotoxy(8,13);
break;
case 9:
gotoxy(12,13);
break;
case 10:
gotoxy(16,13);
break;
case 11:
gotoxy(20,13);
break;
case 12:
gotoxy(8,17);
break;
case 13:
gotoxy(12,17);
break;
case 14:
gotoxy(16,17);
break;
case 15:
gotoxy(20,17);
break;
}
}


getkey()
{
union REGS i,o;
while(!kbhit())
;
i.h.ah=0;
int86(22,&i,&o);
return(o.h.ah);
}

printarray(int *m)
{
int a,b,i,j;

for(a=5,i=0;a<=17;a+=4,i++)
{
for(b=8,j=0;b<=20;b+=4,j++)
{
gotoxy(b,a);
printf("%d",*(m+(i*4)+j));
}
}
gotoxy(20,17);
printf("%c",0);

}


void creategrid()
{
int a,b;

for(a=3;a<=19;a+=4)
{
for(b=6;b<=22;b++)
{
if(b==6(b-6)%4==0)
{
if(a==3)
{
if(b==6)
{
gotoxy(6,3);
printf("%c",218);
}

else if(b==22)
{
gotoxy(22,3);
printf("%c",191);
}

else
{
gotoxy(b,3);
printf("%c",194);
}
}

else if(a==19)
{
if(b==6)
{
gotoxy(6,19);
printf("%c",192);
}

else if(b==22)
{
gotoxy(22,19);
printf("%c",217);
}

else
{
gotoxy(b,19);
printf("%c",193);
}
}

else
{
if(b==6)
{
gotoxy(6,a);
printf("%c",195);
}

else if(b==22)
{
gotoxy(22,a);
printf("%c",180);
}

else
{
gotoxy(b,a);
printf("%c",197);
}
}
}

else
{
printf("%c",196);
}
}
}

for(b=6;b<=22;b+=4)
{
for(a=4;a<=18;a++)
{
if((a-3)%4==0)
continue;

else
{
gotoxy(b,a);
printf("%c",179);
}
}
}
}





}
