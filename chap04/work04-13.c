#include <stdio.h>

int main(void)
{
	int i = 1;
	int sum = 0;
	int num;

	printf("nの値：");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		sum += i;
	}

	printf("1から%dまでの和は%dです。\n", num, sum);

	return 0;
}