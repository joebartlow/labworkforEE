/*
 * Program file name: lab6a.c
 * <Joseph Bartlow>
 * <Mar 2, 2013>
 *
 * Purpose: This program Converts Grade scales
 */
#include <stdio.h>

int grade_to_scale(double per);


int main (void){

	double per;
	int scaled_grade;

	printf("Input percentage grade: ");
	scanf("%lf", &per);

	scaled_grade = grade_to_scale(per);
	printf("Percentage Grade       4-Point Scale     Letter Grade\n");
	switch (scaled_grade){

		case 43:
		printf("   %.2lf                 %.1lf                A+\n", per, (double)scaled_grade / 10);
		break;


		case 40:
		printf("   %.2lf                 %.1lf                A\n", per, (double)scaled_grade / 10);
		break;

		case 36:
		printf("   %.2lf                 %.1lf                A-\n", per, (double)scaled_grade / 10);
		break;

		case 33:
		printf("   %.2lf                 %.1lf                B+\n", per, (double)scaled_grade / 10);
		break;

		case 30:
		printf("   %.2lf                 %.1lf                B\n", per, (double)scaled_grade / 10);
		break;

		case 26:
		printf("   %.2lf                 %.1lf                B-\n", per, (double)scaled_grade / 10);
		break;

		case 23:
		printf("   %.2lf                 %.1lf                C+\n", per, (double)scaled_grade / 10);
		break;

		case 20:
		printf("   %.2lf                 %.1lf                C\n", per, (double)scaled_grade / 10);
		break;

		case 16:
		printf("   %.2lf                 %.1lf                C-\n", per, (double)scaled_grade / 10);
		break;

		case 10:
		printf("   %.2lf                 %.1lf                D\n", per, (double)scaled_grade / 10);
		break;

		case 0:
		printf("   %.2lf                 %.1lf                F\n", per, (double)scaled_grade / 10);

	}

	return (0);

}

int grade_to_scale(double per){

	int ps;


	if (per < 97){

		if (per < 93){

			if (per < 90){

				if (per < 87){

					if (per < 83){

						if (per < 80){

							if (per < 77){

								if (per < 73){

									if (per < 70){

										if (per < 60){
											ps = 10;
										}
										else{
											ps = 0;
										}
									}
									else{
										ps = 16;
									}
								}
								else{
									ps = 20;
								}
							}
							else{
								ps = 23;
							}
						}
						else{
							ps = 26;
						}
					} 
					else{
						ps = 30;
					}
				}
				else{
					ps =33;
				}
			}
			else{
				ps = 36;
			}
		}
		else{
			ps = 40;
		}
	}
	else{
		ps = 43;
	}
	return (ps);
}


