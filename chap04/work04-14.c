#include <stdio.h>

int main(void)
{
	int num;
	int i;

	printf("正の整数を入力してください：");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("%d", i % 10);
	}
	putchar('\n');
	return 0;
}