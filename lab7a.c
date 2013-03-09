/*
 * Program file name: lab7a.c
 * <Joseph Bartlow>
 * <Mar 9, 2013>
 *
 * Purpose: This program generates a random number for the user to guess
 */


#include <stdio.h>
#include <stdlib.h>	/* for rand() and srand() */
#include <time.h>	/* for function time() */
#define TRUE -1
#define FALSE 0
int check_guess( int i, int guess);

int main(void){


	int i;			/* stores random number */
	int num = 0;  
	int guess;
	int isTrue;

	srand(time(NULL));	/* “seeds” random number */
	i = rand() %10; 	/* get a random integer */
	printf("You are playing a guessing game.\n");
	printf("Enter your guess (0-9)\n");

	do {
		scanf("%d", &guess);

		num++;
		
		isTrue = check_guess( i, guess);

		if ( isTrue == TRUE ) {
			printf("Good Guess and it only took you %d times\n", num);
		}
		else  {
			printf("Sorry wrong answer, try again.");
		}
	} while (guess != i); 
	return 0;
}

int check_guess( int i, int guess){
int check;

if ( guess == i){ check = -1;}
else { check = 0;}

return check;
}
