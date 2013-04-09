/*
 * Program File Name: lab9b.c
 * Authors: Joseph Bartlow
 * Date: Mar 30, 2013
 *
 * Purpose: This program returns a proper withdrawal amount
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void do_next_op(double* initial, char* operator, double* operand);
void scan_data(double* initial, char* operator, double* operand);
void instructions();

int main (void){


	double *initial;
	char *operator;
	double *operand;

	initial = (double*) malloc(sizeof(double));
	operator = (char*) malloc(sizeof(char));	
	operand = (double*) malloc(sizeof(double));

	*initial = 0;
	instructions();

	printf("Result:      %lf      ", *initial);
	do {
		scan_data(initial, operator, operand);
		if (*operator != 'c'){
			do_next_op(initial, operator, operand);
		}
		printf("Result:      %lf      ", *initial);
	} while (*operator != 'q');
	//} while ( 1 == 1);

printf("Final:       %lf\n", *initial);


return 0;
}

void do_next_op(double* initial, char* operator, double* operand){

	//	printf("This is operator: %c\n", *operator);
	switch(*operator){

		case '+':
			*initial = *initial + *operand;
			break;

		case '-':
			*initial = *initial - *operand;
			break;

		case '*':
			*initial = *initial * *operand;
			break;

		case '/': 
			*initial = *initial / *operand;
			break;

		case '^':
			*initial = pow(*initial,*operand);
			break;
		case 'c':
			*initial = 0;
			break;

		case 'q':
			*operator = 'q';
			break;
		default:
			printf("Not a supported operator.\n");
			break;


	}


}

void scan_data(double* initial, char* operator, double* operand){

	printf("Input operator> ");
	scanf("%s", operator);
	if(*operator != 'q'){
		if(*operator == 'c'){
			*initial = 0;
		}
		else {
		//	printf("Input operator> ");
			scanf("%lf", operand);
		}
	}
}

void scan_operand(double* operand){

	scanf("%lf", operand);
}

void instructions(){
	printf("This simple calculator program has 5 operations:\n");
	printf("+, -, *, /, and ^\n");
	printf("Type an operator, space, then a number, e.g., + 5.0\n");
	printf("Type c to clear the result.\n");
	printf("Type q to quit the program.\n");
}
