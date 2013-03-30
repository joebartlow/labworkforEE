/*
 * Program File Name: lab9a.c
 * Authors: Joseph Bartlow
 * Date: Mar 30, 2013
 *
 * Purpose: This program returns a proper withdrawal amount
 */

#include <stdio.h>

int bills(int withdrawl);

int main (void){

	int withdrawl = -1;
	int modwith = -1;

	printf("Welcome to the EE161 ATM:\n");
	do {
		printf("Enter the amount you wish to withdrawl: ");
		scanf("%d", &withdrawl);
		modwith = withdrawl % 10;
	} while(modwith != 0);

	bills(withdrawl);
	return 0;
}

int bills(int withdrawl){

	int fifty = 0;
	int twenty = 0;
	int ten = 0;

	while(withdrawl >= 50){
		withdrawl =  withdrawl - 50;
		fifty++;
	}

	while(withdrawl >= 20){
		withdrawl = withdrawl - 20;
		twenty++;
	}

	while(withdrawl >= 10){
		withdrawl = withdrawl - 10;
		ten++;
	}

	printf("%d $50(s)\n", fifty);
	printf("%d $20(s)\n", twenty);
	printf("%d $10(s)\n", ten);


	return 0;
}
