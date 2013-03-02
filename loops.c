#include <stdio.h>

int main(void)
{

	for(int i =0; i < 4; i++)
	{
		printf("Outer %6d\n", i);
		for(int j = 0; j < 4; j++)
		{
			printf("Outer %6d, Inner %6d\n", i, j);
		}
	}

	for(int i =0; i < 4; i++)
	{
		printf("Outer %6d\n", i);
		for(int j = 0; j < i; j++)
		{
			printf("Outer %6d, Inner %6d\n", i, j);
		}
	}

	int n=5;
	int m=3;
	for(int i = n; i > 0; i--)
	{
		for (int j = m; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}



	return 0;
}
