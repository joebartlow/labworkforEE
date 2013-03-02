/*
 * Program file name: lab6b.c
 * <Joseph Bartlow>
 * <Mar 2, 2013>
 *
 * Purpose: This program Calculates employee payroll
 */
#include <stdio.h>
#define employees 6
double calc_pay(double pay_rate, double hrs_worked);

int main (void){

	int employee_num;
	double pay_rate;
	double hrs_worked;
	double total = 0;

	FILE *ifp;
	FILE *ofp;
	char input_file_name[] = "lab6b.in";
	char output_file_name[] = "lab6b.out";

	ifp = fopen(input_file_name, "r");
	ofp = fopen(output_file_name, "w");

	fprintf(ofp, "ID       Pay\n");
	fprintf(ofp, "_____    _________\n");

	while((fscanf(ifp, "%d %lf %lf", &employee_num, &pay_rate, &hrs_worked)) != EOF){
		double pay;
		pay = calc_pay(pay_rate, hrs_worked);
		total = total + pay; 
		fprintf(ofp, "%d    $  %.2lf\n", employee_num, pay);
	}	
	double average = total / employees;
	fprintf(ofp,"Total    $ %.2lf\n", total);
	fprintf(ofp,"Average  $ %.2lf\n", average);

	fclose(ifp);
	fclose(ofp);




	return 0;
}

double calc_pay(double pay_rate, double hrs_worked){

	double pay;

	if (hrs_worked <= 40) {
		pay = pay_rate * hrs_worked;
	}

	else {
		pay = (pay_rate * 40) + ((hrs_worked - 40) * (pay_rate * 1.5));
	}


	return pay * .96375;
}
