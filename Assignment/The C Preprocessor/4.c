#include<stdio.h>
#include<conio.h>
main()
{
int d,a,b;
float sid1,sid2,sid3,sid,p_tri,p_cir,p_sqr,a_tri,a_cir,a_sqr;
float r,base,height;
printf("\nEnter Radius Of Circle");
scanf("%f",&r);
p_cir=PERIC(r);
printf("Cercumference Of Circle %f",p_cir);
a_cir=AREAC(r);
printf("\nArea Of Circle %f",a_cir);
printf("\n\nEnter Side Of A Square");
scanf("%f",&sid);
p_sqr=PERIS(sid);
printf("Perimeter Of Square=%f",p_sqr);
a_sqr=AREAS(sid);
printf("\nArea Of Square=%f",a_sqr);
printf("\n\nEnter Length Of 3 Sides Of Triangle");
scanf("%f%f%f",&sid1,&sid2,&sid3);
p_tri=PERIT(sid1,sid2,sid3);
printf("Perimeter Of Triangle=%f",p_tri);
printf("\n\nEnter Base And Hight Of Triangle");
scanf("%f%f",&base,&height);
a_tri=AREAT(base,height);
printf("Area Of Triangle=%f",a_tri);
printf("\n\n\n\nPress Any Key TO Exist");
getch();
}
