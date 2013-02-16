/*
* Program File Name: lab4a.c
* Authors: < Joseph Bartlow >
* Date: < Feb 16, 2013>
*
* Purpose: This program computes the surface area of a container.
*/
#include <stdio.h>
#define PI 3.14159


int main(void){

printf("COST OF MANUFACTURING CYLINDERICAL CONTAINERS\n");
printf("This program computes the cost of producing open-top cylindrical containers.\n");

printf("Radius in cm: ");
double radius;
scanf("%lf", &radius);

printf("Height in cm: ");
double height;
scanf("%lf", &height);

printf("Material cost in $/cm^2: ");
double material_cost;
scanf("%lf", &material_cost);

printf("Quantity: ");
int quantity;
scanf("%d", &quantity);

double base;
base = PI * radius * radius;

double side;
side = 2 * PI * radius * height;

double surface_area;
surface_area = side + base;

printf("Surface area is %.3lf cm^2 .\n", surface_area);

double total_cost;
total_cost = material_cost * surface_area * quantity;

printf("Total production cost is $ %.2lf .\n", total_cost);

return 0;
}
