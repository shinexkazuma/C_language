#include <stdio.h>

int main(void)
{
	int a, b, ans;

	puts("二つの整数を入力してください。");
	printf("整数A:");
	scanf("%d", &a);
	printf("整数B:");
	scanf("%d", &b);

	ans = (a > b) ? a - b : b - a;

	if (ans <= 10 || ans <= -10)
	{
		puts("それらの差は10以下です。");
	}
	else
	{
		puts("それらの差は11以上です。");
	}

	return 0;
}