#include<stdio.h>
void main()
{
    int ch= 'a' + 'b';
    switch (ch){
case 'a':
case 'b':
    printf("You entered b\n");
case'A':
    printf("a as in ashar\n");
case 'b'+'a':
    printf("You entered a and b\n");
    }
    return 0;
}
