#include<stdio.h>
#define gotol(l) printf("\033[%dA",(l))
#define gotoc(c) printf("\033[%dC",(c))
#define gotold(d) printf("\033[%dB",(d))
void disp(int j,int i)
{
        switch(j)
        {
                        case 0:gotoc(i*15);
                               printf("#####\n");gotoc(i*15);
                               printf("#   #\n");gotoc(i*15);
                               printf("#   #\n");gotoc(i*15);
                               printf("#   #\n");gotoc(i*15);
                               printf("#   #\n");gotoc(i*15);
                               printf("#   #\n");gotoc(i*15);
                               printf("#   #\n");gotoc(i*15);
                               printf("#####\n");gotol(8);;
                               break;
                        case 1:gotoc(i*15);
                               printf(" #\n");gotoc(i*15);
                               printf("##\n");gotoc(i*15);
                               printf(" #\n");gotoc(i*15);
                               printf(" #\n");gotoc(i*15);
                               printf(" #\n");gotoc(i*15);
                               printf(" #\n");gotoc(i*15);
                               printf(" #\n");gotoc(i*15);
                               printf("###\n");gotol(8);
                               break;
                        case 2:gotoc(i*15);
                               printf("#####\n");gotoc(i*15);
                               printf("     #\n");gotoc(i*15);
                               printf("     #\n");gotoc(i*15);
                               printf("     #\n");gotoc(i*15);
                               printf("#####\n");gotoc(i*15);
                               printf("#   \n");gotoc(i*15);
                               printf("#   \n");gotoc(i*15);
                               printf("#####\n");gotol(8);break;
                        case 3:gotoc(i*15);
                               printf("#####\n");gotoc(i*15);
                               printf("     #\n");gotoc(i*15);
                               printf("     #\n");gotoc(i*15);
                               printf(" #####\n");gotoc(i*15);
                               printf("     #\n");gotoc(i*15);
                               printf("     #\n");gotoc(i*15);
                               printf("     #\n");gotoc(i*15);
                               printf(" #####\n");
                               gotol(8);break;
                        case 4:gotoc(i*15);
                               printf("#\n");gotoc(i*15);
                               printf("#\n");gotoc(i*15);
                               printf("#\n");gotoc(i*15);
                               printf("#  #\n");gotoc(i*15);
                               printf("#####\n");gotoc(i*15);
                               printf("   #\n");gotoc(i*15);
                               printf("   #\n");gotoc(i*15);
                               printf("   #\n");gotol(8);break;
                        case 5:gotoc(i*15);
                               printf("#####\n");gotoc(i*15);
                               printf("#    \n");gotoc(i*15);
                               printf("#    \n");gotoc(i*15);
                               printf("#####\n");gotoc(i*15);
                               printf("    #\n");gotoc(i*15);
                               printf("    #\n");gotoc(i*15);
                               printf("    #\n");gotoc(i*15);
                               printf("#####\n");gotol(8);
                                break;
                        case 6:gotoc(i*15);
                               printf("#####\n");gotoc(i*15);
                               printf("#    \n");gotoc(i*15);
                               printf("#    \n");gotoc(i*15);
                               printf("#####\n");gotoc(i*15);
                               printf("#   #\n");gotoc(i*15);
                               printf("#   #\n");gotoc(i*15);
                               printf("#   #\n");gotoc(i*15);
                               printf("#####\n");gotol(8);
                                break;
                        case 7:gotoc(i*15);
                               printf("#####\n");gotoc(i*15);
                               printf("    #\n");gotoc(i*15);
                               printf("    #\n");gotoc(i*15);
                               printf("    #\n");gotoc(i*15);
                               printf("    #\n");gotoc(i*15);
                               printf("    #\n");gotoc(i*15);
                               printf("    #\n");gotoc(i*15);
                               printf("    #\n");gotol(8);
                                break;
                        case 8:gotoc(i*15);
                               printf("#####\n");gotoc(i*15);
                               printf("#   #\n");gotoc(i*15);
                               printf("#   #\n");gotoc(i*15);
                               printf("#####\n");gotoc(i*15);
                               printf("#   #\n");gotoc(i*15);
                               printf("#   #\n");gotoc(i*15);
                               printf("#   #\n");gotoc(i*15);
                               printf("#####\n");gotol(8);
                                break;
                        case 9:gotoc(i*15);
                               printf("#####\n");gotoc(i*15);
                               printf("#   #\n");gotoc(i*15);
                               printf("#   #\n");gotoc(i*15);
                               printf("#####\n");gotoc(i*15);
                               printf("    #\n");gotoc(i*15);
                               printf("    #\n");gotoc(i*15);
                               printf("    #\n");gotoc(i*15);
                               printf("#####\n");gotol(8);
                                break;

        }
}
int main(void)
{
        char str[6],*s=str;
        int i=0;
        printf("\n Enter the string\n\n\n");
        scanf("%s",str);
        printf("\n");
        for(i=0;str[i]!='\0';++i){
                disp((str[i]-48),i);
        }
        gotold(8);

return 0;
}
