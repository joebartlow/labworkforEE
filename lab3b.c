/*
 * Program File Name: lab3b.c
 * Authors: Joseph Bartlow
 * Date: Feb 12, 2013
 *
 * Purpose: This program calculates the monthly paments on the purchase of a car
 */

#include <stdio.h>
#include <math.h>

double calc_payments(double purchase_price, double down_payment, double annual_interest_rate, int number_of_monthly_payments);

int main(void) {

	FILE *ifp;
	FILE *ofp;
	double purchase_price;
	double annual_interest_rate;
	double down_payment;
	int number_of_monthly_payments;
	double payment_amount;
	char input_file_name[] = "lab3b.in";
	char output_file_name[] = "lab3b.out";

	ifp = fopen(input_file_name, "r");

	fscanf(ifp, "%lf %lf %lf %d", &purchase_price, &down_payment, &annual_interest_rate, &number_of_monthly_payments);	

	fclose(ifp);

	ofp = fopen(output_file_name, "w");

	fprintf(ofp, "Purchase price ($): %.2lf\n", purchase_price);

	fprintf(ofp, "Down payment ($): %.2lf\n", down_payment);

	fprintf(ofp, "Annual interest rate (%%): %.2lf\n", annual_interest_rate);

	fprintf(ofp, "Number of monthly payments (#): %d\n", number_of_monthly_payments);

	payment_amount = calc_payments(purchase_price, down_payment, annual_interest_rate, number_of_monthly_payments);

	fprintf(ofp, "Monthly payments are $%.2lf\n", payment_amount);

	fclose(ofp);
	return 0;
}

double calc_payments(double purchase_price, double down_payment, double annual_interest_rate, int number_of_monthly_payments){

	double payment_amount;

	payment_amount = ((purchase_price - down_payment) * (annual_interest_rate / 100)) / (1 - pow((1 + (annual_interest_rate / 100)), (0 - number_of_monthly_payments)));

	return payment_amount;
}


