#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力してください : ");
	scanf("%d", &no);

	printf("その数に12を加えると%dです。\n", no + 12);

	return 0;
}