#include <stdio.h>
void main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm = 0;

    printf("Enter the number of terms:\n");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for (i = 1; i <= n; ++i)
    {


        if(i == 1)
        {
            printf("\n%d,",t1);
            continue;
        }
        if(i == 2)
        {
            printf("%d, ", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("\n%d, ", nextTerm);
    }
}
