/*
* Name: lab2b.c
* Authors: Joseph Bartlow
* Date: Feb, 5 2013
*
* Purpose: This program calculates how much money is saved on new toilets
*/

#include <stdio.h> 
#define COST_PER_TOILET 150
#define OLD_WATER_USAGE_PER_FLUSH 15
#define AVERAGE_FLUSHES_PER_DAY 14
#define NEW_FLUSH_AVERAGE 2
#define COST_OF_WATER 2.47
#define UNITS_OF_WATER 3785

int main(void) 
{
	long population;
	printf("Input city population: ");
	scanf("%ld", &population);

	long total_toilets = population / 3;
	long total_cost = total_toilets * COST_PER_TOILET;
	
	printf("City needs to install %ld toilets, costing $ %ld.\n", total_toilets, total_cost);

	long old_water_usage = OLD_WATER_USAGE_PER_FLUSH * AVERAGE_FLUSHES_PER_DAY * total_toilets;

	long new_water_usage = NEW_FLUSH_AVERAGE * AVERAGE_FLUSHES_PER_DAY * total_toilets;

	long saved_water = old_water_usage - new_water_usage;
	printf("Water usage is reduced by %ld liters/day.\n", saved_water);

	long money_saved_per_day = (saved_water / UNITS_OF_WATER) * COST_OF_WATER;

	long money_saved_per_year = money_saved_per_day * 365;

	printf("Savings in water cost is $ %ld/day, or $ %ld/year.\n",money_saved_per_day, money_saved_per_year);


return 0;
}
