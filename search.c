#include <stdio.h>

int get_imax(const int arr[], int size_of_array);
void sel_sort(int arr[], int size);

int main(void){

	int my_array[10] = {0, 17, -41, 2, 93, 71, -104, 91, 1, 42};
	int largest_bucket = get_imax(my_array, 10);

	printf("The largest value is: %d, in bucket %d\n", my_array[largest_bucket], largest_bucket);

	sel_sort(my_array, 10);

	for(int i = 0; i < 10; i++){
		printf("Sorted array: %d, %d\n", i, my_array[i]);
	}


	return 0;
}

int get_imax(const int arr[], int size_of_array){

	int imax;
	int max;

	for(int i = 0; i < size_of_array; i++){

		if(i == 0){
			max = arr[i];
			imax = i;
		}
		else if(arr[i] > max){
			max = arr[i];
			imax = i;
		}
	}


	return imax;
}

void sel_sort(int arr[], int size){

	int imax;
	int temp;

	for( int i = 0; i < size - 1; i++){
		imax = get_imax(arr, size - i);
		if (imax !=  size - 1 - i){
			temp = arr[imax];
			arr[imax] = arr[size - 1 -i];
			arr[size - 1 - i] = temp;
		}

	} 


}
