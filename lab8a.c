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



	for (i = 1; i < n + 1; i++){
		for (j = 0; j < i; j++){
			printf("%d", i);
		}
		printf("\n");
	}
	for (i = i - 2; i > 0; i--){
		for (j = 0; j < i; j++){
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}
