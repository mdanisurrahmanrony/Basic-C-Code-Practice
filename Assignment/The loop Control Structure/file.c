#include<stdio.h>
struct student{
char name;
int marks;
};
void display(struct studdent);

             void main(){
struct student name[5];
struct student marks;
int i;
FILE*fp=fopen("out.txt","w");
fprintf("input the name\n marks");
scanf("%c %d",&name,&marks);
for(i=0;i<5;i++);
marks+=1;
}
printf("the name is %c\n the marks is%d",name,marks);
fclose(fp);
}
