/*
 * Program file name: lab7a.c
 * <Joseph Bartlow>
 * <Mar 16, 2013>
 *
 * Purpose: This program generates an output pattern
 */


#include <stdio.h>

int main (void){

	int i;
	int j;
	int n = 0;


	do{

		printf("Input a number between 0 and 9> ");
		scanf("%d", &n);

	}while (n < 1 || n > 9);



	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if (j == i){printf("1");}
			else {printf("0");}		
		}
		printf("\n");
	}

	return 0;
}
