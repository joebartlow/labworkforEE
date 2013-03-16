#include <stdio.h>

void init_array( int arr[], int n, int in_value);

int main(void){
	int my_array[25];

	for( int i = 0; i < 25; i++){
		printf("The int: %d\n", my_array[i]);
	}

	init_array(my_array, 5, 37);
	
	for( int i = 0; i < 25; i++){
		printf("The int: %d\n", my_array[i]);
	}

	return 0;
}

void init_array( int arr[], int n, int in_value){

	int i;

	for( i = 0; i < n; i++)
		arr[i] = in_value;
}
