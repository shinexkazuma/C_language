#include <stdio.h>

int main()
{

	int a, b;
	puts("二つの整数を入力して下さい。");
	printf("整数A：");
	scanf("%d", &a);
	printf("整数B：");
	scanf("%d", &b);

	if (a == b)
	{
		printf("a == b : 1\n");
	}
	else
	{
		printf("a == b : 0\n");
	}
	if (a != b)
	{
		printf("a != b : 1\n");
	}
	else
	{
		printf("a != b : 0\n");
	}
	if (a < b)
	{
		printf("a < b : 1\n");
	}
	else
	{
		printf("a < b : 0\n");
	}
	if (a > b)
	{
		printf("a > b : 1\n");
	}
	else
	{
		printf("a > b : 0\n");
	}
	if (a <= b)
	{
		printf("a <= b : 1\n");
	}
	else
	{
		printf("a <= b : 0\n");
	}
	if (a >= b)
	{
		printf("a >= b : 1\n");
	}
	else
	{
		printf("a >= b : 0\n");
	}

	return 0;
}