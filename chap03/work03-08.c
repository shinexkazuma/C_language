#include <stdio.h>

int main(void)
{
	int n1, n2, ans;

	puts("二つの整数を入力してください。");
	printf("整数1:");
	scanf("%d", &n1); //30
	printf("整数2:");
	scanf("%d", &n2); //10

	if (n1 > n2)
	{
		ans = n1 - n2;
	}
	else
	{
		ans = n2 - n1;
	}

	printf("それらの差は%dです。\n", ans);

	return 0;
}