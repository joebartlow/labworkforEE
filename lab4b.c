/*
 * Program File Name: lab4b.c
 * Authors: < Joseph Bartlow >
 * Date: < Feb 16, 2013>
 *
 * Purpose: This program computes the surface area of a container.
 */
#include <stdio.h>
#define PI 3.14159

int instruct (void);
int get_quantity (void);
double comp_area(double height, double radius);
int print_area_cost(double surface_area, double total_cost);

int main(void){

	double radius;
	double height;
	double material_cost;
	int quantity;
	double surface_area;
	double total_cost;

	instruct();

	printf("Radius in cm: ");
	scanf("%lf", &radius);

	printf("Height in cm: ");
	scanf("%lf", &height);

	printf("Material cost in $/cm^2: ");
	scanf("%lf", &material_cost);

	quantity = get_quantity();

	surface_area = comp_area(height, radius);
	total_cost = material_cost * surface_area * quantity;

	print_area_cost(surface_area, total_cost);

	return 0;
}

int instruct (void){


	printf("COST OF MANUFACTURING CYLINDERICAL CONTAINERS\n");
	printf("This program computes the cost of producing open-top cylindrical containers.\n");

	return 0;
}

int get_quantity (void){

	int quantity;

	printf("Quantity: ");
	scanf("%d", &quantity);

	return quantity;
}

double comp_area(double height, double radius){

	double base;
	double side;
	double surface_area;

	base = PI * radius * radius;
	side = 2 * PI * radius * height;
	surface_area = side + base;

	return surface_area;
}

int print_area_cost(double surface_area, double total_cost){

	printf("Surface area is %.3lf cm^2 .\n", surface_area);
	printf("Total production cost is $ %.2lf .\n", total_cost);


	return 0;
}
