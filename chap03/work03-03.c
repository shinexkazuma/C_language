#include <stdio.h>

int main(void)
{
	int input;

	printf("整数を入力してください:");
	scanf("%d", &input);

	printf("絶対値は%dです。", -input);

	return 0;
}