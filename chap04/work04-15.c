#include <stdio.h>

int main(void)
{
	int i;
	int min;
	int max;
	int scale;
	double weight;

	printf("何cmから：");
	scanf("%d", &min);
	printf("何cmまで：");
	scanf("%d", &max);
	printf("何cmごと:");
	scanf("%d", &scale);

	for (i = min; i <= max; i += scale)
	{
		weight = (i - 100) * 0.9;
		printf("%dcm %.2fkg\n", i, weight);
	}

	return 0;
}