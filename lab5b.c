/*
 * Program file name: lab5b.c
 * <Joseph Bartlow>
 * <Feb 23, 2013>
 *
 * Purpose: This program converts heading to bearing.
 */
#include <stdio.h>


int instruct (void);
int convert(double heading);

int main (void){

	instruct();

	double heading;

	printf("Input the heading\n");
	scanf("%lf", &heading);

	if (heading > 360) {
		printf("Error: Incompatible Heading\n");
		return(0);
	} 
	convert(heading);
	return (0);
}


int instruct (void){

	printf("This program converts compass headings in degrees (0 to 360, where 0 is due North) to compass bearings.\n");



	return (0);
}

int convert(double heading){

	if ((heading >= 0 && heading <= 90) || (heading >= 271 && heading <= 360)){
		if (heading >= 0 && heading <= 90){
			printf("North %.1lf degrees East\n", 90 - (90 - heading));
		}
		else {
			printf("North %.1lf degrees West\n", 360 - heading);
		}

	}
	else
	{
		if (heading >= 91 && heading <= 180){
			printf("South %.1lf degrees East\n", 180 - heading);
		}
		else {		
			printf("South %.1lf degrees West\n", 90 - (270 - heading));
		}
	}


	return(0);
}
