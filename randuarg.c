#include<stdio.h>
/*
NAME: Suyanka Pokharel
summary:Program to generate random numbers between 1 and 10
*/
int main (int argc, char *argv[])
{
    int n, i, x[10];
    if (argc==2)
    sscanf(argv[1],"%d", &n);
    else
    {
        printf("How many numbers do you want?\n");
        scanf("%d",&n);
        }
            while((n<1)|| (n>10))
            {
                printf("ERROR!Enter numbers between 2 and 10000. \n");
                printf("How many numbers do you want?\n");
                scanf("%d",&n);
                }
                    for(i=0; i<n; i++)
                    x[i]= randu();
                    for(i=0; i<n; i++)
                    printf("%d \t",x[i]);
                    printf("\n");
                    }
                        int randu(void)
                        {
                            static int seed= 17;
                            seed= (25179* seed + 13849)% 65536;
                            return seed;
                            }
}
