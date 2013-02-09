#include <stdio.h>

int multiple_two_ints(int x, int y);

int main(void){
	int joe;
	int y;
	int answer;
	
	printf("Input first value");
	scanf("%d", &joe);

	printf("Input second value");
	scanf("%d", &y);

	answer = multiple_two_ints(joe, y);
	printf("Two numbers multipled together = %d\n", answer);
	return 0;
}

int multiple_two_ints(int x, int y){

int multiply;
multiply = x * y;
return multiply;
}
