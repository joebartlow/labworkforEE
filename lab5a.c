/*
 * Program file name: lab5a.c
 * <Joseph Bartlow>
 * <Feb 23, 2013>
 *
 * Purpose: This program reports the contents of a compressed-gas cylinder based on the first letter of the cylinder's color.
 */
#include <stdio.h>

char lower_case(char ch_in);

int main (void){

	char color;
	char * substance;

	printf("Enter the first letter of the color of the can of compressed gas.\n");
	scanf("%c", &color);

	color = lower_case(color);

	if (color == 'o') {substance = "Orange Ammonia";}
	else if (color == 'b') {substance = "Brown Carbon_Monoxide";}
	else if (color == 'y') {substance = "Yellow Hydrogen";}
	else if (color == 'g') {substance = "Green Oxygen";}
	else {substance = "Contents_Unknown";}

	printf("The substance is: %s\n", substance);
	return (0);

}

char lower_case(char ch_in)
{

	char ch_out;
	if(ch_in >= 'A' && ch_in <= 'Z')
	{
		ch_out = ch_in - 'A' + 'a';
	}
	else { ch_out = ch_in; }

	return (ch_out);
}
