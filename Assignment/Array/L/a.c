#include<stdio.h>

void main()
{
    int threed[3][2][3]={
            {
            1,2,3,
            4,5,6
            },

            {
            7,8,9,
            10,11,12
            },

            {
            13,14,15,
            16,17,18
            }
            };

    printf("\nFirst element of array is %d\nLast element of the array is %d",threed[0][0][0],threed[2][1][2]);
}
