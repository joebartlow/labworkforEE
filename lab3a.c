/*
 * Program File Name: lab3a.c
 * Authors: Joseph Bartlow
 * Date: Feb 12, 2013
 *
 * Purpose: This program calculates the monthly paments on the purchase of a car
 */

#include <stdio.h>
#include <math.h>

double calc_payments(double purchase_price, double down_payment, double annual_interest_rate, int number_of_monthly_payments);

int main(void) {

	double purchase_price;
	double annual_interest_rate;
	double down_payment;
	int number_of_monthly_payments;
	double payment_amount;

	printf("This program computes the monthly payments on the purchase of a new or used car.\n");

	printf("Input the purchase price of the car.\n");
	scanf("%lf", &purchase_price);

	printf("Input the down payment on the car.\n");
	scanf("%lf", &down_payment);

	printf("Input the annual interest rate for the loan.\n");
	scanf("%lf", &annual_interest_rate);

	printf("Input the number of monthly payments.\n");
	scanf("%d", &number_of_monthly_payments);

	payment_amount = calc_payments(purchase_price, down_payment, annual_interest_rate, number_of_monthly_payments);

	printf("Monthly payments are $%.2lf\n", payment_amount);
	return 0;
}

double calc_payments(double purchase_price, double down_payment, double annual_interest_rate, int number_of_monthly_payments){

	double payment_amount;

	payment_amount = ((purchase_price - down_payment) * (annual_interest_rate / 100)) / (1 - pow((1 + (annual_interest_rate / 100)), (0 - number_of_monthly_payments)));

	return payment_amount;
}


