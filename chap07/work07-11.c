#include <stdio.h>

int main(void)
{
	int i;
	float x;
	float sum_decimal = 0, sum_integer = 0;

	for (i = 0, x = 0.0; i <= 100; i++, x += 0.01)
	{
		sum_decimal += x;
		sum_integer += (i / 100.0);
	}

	printf("少数制御の累計は%fで整数制御の累計は%fです。", sum_decimal, sum_integer);

	return 0;
}