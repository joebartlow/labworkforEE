#include <stdio.h>

void add_frac(int n1, int d1, int n2, int d2, int *n_ans, int *d_ans);

int main(void){

	int n1 = 1;
	int d1 = 2;
	int n2 = 1;
	int d2 = 4;
	int *n_ans = malloc(sizeof *n_ans);
	int *d_ans = malloc(sizeof *d_ans);

	add_frac(n1, d1, n2, d2, n_ans, d_ans);

	printf("The fraction is %d / %d\n", *n_ans,*d_ans);
	
	free(n_ans);
	free(d_ans);

	return 0;
}

void add_frac(int n1, int d1, int n2, int d2, int *n_ans, int *d_ans){

	*d_ans = d1 * d2; 

	*n_ans = (d1 * n2) + (d2 * n1);
}
