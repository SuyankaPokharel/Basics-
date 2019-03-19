#include <stdio.h>
/*
  Name: Suyanka Pokharel
  Program summary: To calculate the total amount of money when different units( nickel, dimes, quarters and half dollars) with their total number is    		   given
*/

int main(void) {
	int half,qua,dime,nik,pen;
	int totalnumber;
	float totalvalue;

	printf("What is the total  number of half dollars you have?\n");
	scanf("%d",&half);
	while(half<0) {
		printf("sorry! You cannot have negative number of coins\n");
		printf("What is the total number of  half dollars you have?\n");
		scanf("%d",&half);
	}

	printf("What is the total  number of quarters you have?\n");
	scanf("%d",&qua);
	while(qua<0) {
		printf("sorry! You cannot have negative number of coins\n");
		printf("What is the total number of quarters you have?\n");
		scanf("%d",&qua);
	}

	printf("What is the total  number of dimes you have?\n");
	scanf("%d",&dime);
	while(dime<0) {
		printf("sorry! You cannot have negative number of coins\n");
		printf("What is the total number of dimes you have?\n");
		scanf("%d",&dime);
	}

	printf("What is the total  number of nickels you have?\n");
	scanf("%d",&nik);
	while(nik<0) {
		printf("sorry! You cannot have negative number of coins\n");
		printf("What is the total number of nickels you have?\n");
		scanf("%d",&nik);
	}

	printf("What is the total  number of pennies you have?\n");
	scanf("%d",&pen);
	while(pen<0) {
		printf("sorry! You cannot have negative number of coins\n");
		printf("What is the total number of pennies you have?\n");
		scanf("%d",&pen);
	}


	totalnumber = half + qua + dime + nik+pen;
	totalvalue = 0.5*half + 0.25*qua + 0.1*dime + 0.05*nik + 0.01*pen;


	printf("The following money is provided for calculation\n");

	if(half>1)
		printf("%3d half dollars\n",half);

	if(half==1)
		printf("%3d half dollars\n",half);

	if(qua>1)
		printf("%3d quarters\n",qua);

	if(qua==1)
		printf("%3d quarters\n",qua);


	if(dime>1)
		printf("%3d dimes\n",dime);

	if(dime==1)
		printf("%3d dimes\n",dime);


	if(nik>1)
		printf("%3d nickel\n",nik);

	if(nik==1)
		printf("%3d nickel\n",nik);


	if(pen>1)
		printf("%3d pennies\n",pen);

	if(pen==1)
		printf("%3d pennies\n",pen);

	printf("The total value after adding all these %d units(coins) is $%.2f\n",totalnumber,totalvalue);
}
