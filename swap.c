#include<stdio.h>
/*
NAME: Suyanka Pokharel
summary: Program to swap two numbers
*/
void swap (int *n1,int *n2){
	int temp;
	temp= *n1;
	*n1= *n2;
	*n2= temp;
return;
}

int main (int argc, char *argv[]){
int n1, n2;
   sscanf(argv[1],"%d",&n1);
   sscanf(argv[2],"%d",&n2);

if (argc<=3){
    swap(&n1, &n2);
    printf("%d %d \n", n1,n2);
}
if (argc>3){
    printf("ERROR! Only two numbers are required.");
}
    return 0;
}
