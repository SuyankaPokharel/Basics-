#include<stdio.h>
int randu(void);
void bubble(int*,int);
void swap(int *, int *);
/*
Name: Suyanka Pokharel
Program summary: Bubble sort using command line
*/
int main (int argc, char *argv[]){

	int n, i, x[10000];
	if (argc==2)
	sscanf(argv[1],"%d", &n);
	else
	{
		printf("How many numbers do you want?\n");
		scanf("%d",&n);
		}
	while((n<2)|| (n>10000)){

	  printf("ERROR!Entered numbers should be between 2 and 10000. \n");
				printf("How many numbers do you want?\n");
				scanf("%d",&n);
				}
					for(i=0; i<n; i++)
					x[i]= randu();
					bubble(x,n);
					for(i=0; i<n; i++)
					printf("%d \t",x[i]);
					printf("\n");
					}
						int randu(void){
              static int seed= 17;
							seed= (25179* seed + 13849)% 65536;
							return seed;
							}

                void bubble(int a[], int n){

									int i, j;
		 							for (i=0; i<n-1; i++)
									for (j=n-1; i<j; j--)
									if (a[j-1] < a[j])
									swap (& a[j-1], & a[j]);
									}
										void swap (int *a, int *b){
								                   int temp;
                                   temp = *a;
                                   *a = *b;
                                   *b = temp;
                                 }
