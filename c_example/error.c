#include <stdlib.h>
#include <stdio.h>

int calculate_Percent(int portion, int total);
int get_A_Random_Number(int seed);

int main(void)
{
	int i, j, k;
	int total = 100;
	i = get_A_Random_Number(1001);
	j = get_A_Random_Number(20202);
	printf("\ni = %d\n", calculate_Percent(i, total));
	printf("j = %d\n", calculate_Percent(j, total));
	printf("k = %d\n", calculate_Percent(k, total));

	return 0;
}

int get_A_Random_Number(int seed)
{
	srand(seed);
	return rand() % (1);
}

int calculate_Percent(int portion, int total)
{
	// this calculates the %
	return ( ( ((portion * portion) / portion) * 100 ) * total);
}

