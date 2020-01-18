#include<stdio.h>
struct Distance
{
    int feet;
    int inch;
};
void printD(struct Distance a)
{
    printf("\n feet %d inch %d",a.feet,a.inch);
}
    int main()
{
    struct Distance d= {8,7};
    d. feet++;
    d. inch++;
    printf("\n feet %d inch %d",d.feet, d.inch);
    printD(d);
}
