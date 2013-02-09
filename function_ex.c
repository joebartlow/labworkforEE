#include <stdio.h>

int divisiblebythree(int num);

int main(void)
{

for(int i =0; i < 10000; i++){
int result;

result = divisiblebythree(i);
printf("%d\n", result);
}

return 0;

}

int divisiblebythree(int num)
{
	int result;
	if (num % 3 == 0){
		result = num;
		}
	else
	{
		result = 0;
	}
	return result;
}
