#include <stdio.h>

void adjust_point(int *n)
{
	if (*n < 0)
	{
		*n = 0;
	}
	else if (*n > 100)
	{
		*n = 100;
	}
}

int main(void)
{
	int num;

	printf("整数を入力してください：");
	scanf("%d", &num);

	adjust_point(&num);

	printf("調整後の整数は%dです。\n", num);

	return 0;
}