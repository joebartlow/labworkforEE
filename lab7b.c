/*
 * Program file name: lab7b.c
 * <Joseph Bartlow>
 * <Mar 9, 2013>
 *
 * Purpose: This program calculates a teams batting average.
 */

#include <stdio.h> 


int main (void){

	int batter_id;
	char batting_attempts[20];
	FILE *ifp;


	char input_file_name[] = "lab7b.in";

	ifp = fopen(input_file_name, "r");
if (ifp != NULL)
{
	while((fscanf(ifp, "%d %s", &batter_id, &batting_attempts)) != EOF){

		int at_bat = 0;
		int hits = 0;
		double batting_ave;

		int i = 0;
		while (batting_attempts[i] != 'x')
		{
			if (batting_attempts[i] == 'H'){
				hits++;
				at_bat++;
			}
			else if (batting_attempts[i] == 'O'){
				at_bat++;
			}

			i++;
		}
		batting_ave = (double)hits / (double)at_bat;
		printf(" Player %d's batting average is: %.3lf\n", batter_id, batting_ave);
	}

}
else {
	return -1;
}


	return 0;
}
