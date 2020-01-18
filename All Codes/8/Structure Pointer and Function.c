#include <stdio.h>


struct salesman{

    int age;
    char *name;
    int height;
    int n_o_sell;
};
void demosell(struct salesman sales1);

main()
{
    struct salesman sales1;
    struct salesman *ptr1;

    ptr1 = &sales1;

    sales1.name = "Md. Anisur Rahman Rony";
    sales1.age = 20;
    sales1.height = 6;
    sales1.n_o_sell = 100;

    demosell(sales1);

}
 void demosell(struct salesman sales1)
{
     printf("Name: %s",sales1.name);
    printf("\nAge: %d\nHeight: %d\nNumber of sells: %d",sales1.age,sales1.height,sales1.n_o_sell);
}
