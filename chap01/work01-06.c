#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力してくださいあ : ");
	scanf("%d", &no);

	printf("その数から６を減じると%dです。\n", no - 6);

	return 0;
}