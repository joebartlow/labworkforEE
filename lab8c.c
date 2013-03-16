/*
 * Program file name: lab7a.c
 * <Joseph Bartlow>
 * <Mar 16, 2013>
 *
 * Purpose: This program computes the square root of a number.
 */

#include <stdio.h>
#include <complex.h>
#define ACCURACY 0.000001

double my_sqrt(double n);

int main (void){
	double n;
double answer;
	printf("This program computes the square root of a number\n");

do{
	printf("Enter number> ");
	scanf("%lf", &n);
}while(n < 0);

	printf("Initial guess: 1.0    Accuracy: %lf\n", ACCURACY);
	answer = my_sqrt(n);

	printf("The square root of %lf = %lf\n", n, answer);


	return 0;
}


double my_sqrt(double n){
	int vc = 1;
	double lg;
	double ng = 1.0;

	printf("Count   Last Guess     Next Guess\n");
	printf("_______ ___________    __________\n");
	do{
		lg = ng;
		
		ng = (lg + n / lg) * .5; 
		printf("%d        %.4lf        %.4lf\n", vc, lg, ng);
		vc++;
	} while ( cabs( lg - ng ) > ACCURACY );

	return ng;
}
