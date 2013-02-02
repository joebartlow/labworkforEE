/*
* Program File Name: lab2a.c
* Authors: Joseph Bartlow
* Date: Feb 5, 2013
*
* Purpose: This program calculates the reimbursement totals for a given driver.
*/

#include <stdio.h>
#define PRICE_PER_MILE .35

int main(void)
{
	double beginning_odometer;
	printf("Enter the beginning dometer reading=> ");
	scanf("%lf.1", &beginning_odometer);
	
	double ending_odometer;
	printf("Enter the ending odometer reading=>");
	scanf("%lf.1", &ending_odometer);

	double total_miles = ending_odometer - beginning_odometer;
	
	printf("You travelled %.1lf miles at %.2lf per_mile. \n", total_miles, PRICE_PER_MILE);

	double reimbursement = total_miles * PRICE_PER_MILE;
	printf("Your reimbursement is $ %.2lf. \n", reimbursement);

	return 0;
}
