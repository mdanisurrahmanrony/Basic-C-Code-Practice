/*Function which returns sum, average and standard deviation*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int sum, avg;
    double stdev;
    function (&sum,&avg,&stdev);/*Function call by reference*/
    printf("\nSum=%d\nAverage=%d\nStandard deviation=%if",sum,avg,stdev);
    getch();
}
function (int *sum, int *avg, double *stdev)
{
    int n1,n2,n3,n4,n5;
    printf("Enter 5 numbers: \n");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    *sum=n1+n2+n3+n4+n5;/*Calculate sum*/
    *avg=*sum/5;/*Calculate average*/
    /*Calculate standard deviation*/
    *stdev=sqrt((pow((n1-*avg),2)+pow((n2-*avg),2)+pow((n3-*avg),2)+pow((n4-*avg),2)+pow((n5-*avg),2))/4);
}
