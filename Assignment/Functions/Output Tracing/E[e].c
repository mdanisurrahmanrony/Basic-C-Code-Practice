#include<stdio.h>
int main()
{
    float a=13.5;
    float *b,*c;
    b=&a;/*suppose address of a is 1006*/
    c=b;
    printf("%u\n%u\n%u\n",&a,b,c);
    printf("%f\n%f\n%f\n%f\n%f\n",a,*(&a),*&a,*b,*c);
    return 0;
}
