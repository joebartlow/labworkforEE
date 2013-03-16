#include <stdio.h> 

int main (void){

	int i = 0;
	int sum = 0;



	while(i < 12){
		sum += 1;
		i++;
		printf("The sum is : %d\n", sum);
	}

	printf("\n\n\n");

	sum = 0;
	for (int j = 0; j < 12; j++){
		sum += 1;
		printf("The sum is : %d\n", sum);
	}


	double population = 10000;
	int year = 0;


	while (population < 150000)
	{
		population = population * 1.015;
		year++;
		printf("The population in year %d is %lf.\n", year, population);
	}

	char user_input;
	int count;

	while (user_input != 'q')
	{
		scanf("%c", &user_input);
		count++;
		printf("count = %d.\n", count);

	}

	printf("It took you %d tries to hit q.\n", count);

int my_int; // This is a location in the system for an int (bucket)

printf("The address of our bucket for my_int is %d\n", &my_int);
return 0;
}
