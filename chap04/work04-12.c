#include <stdio.h>

int main(void)
{
	int no, count = 0;
	do
	{
		printf("正の整数を入力してください：");
		scanf("%d", &no);
		if (no <= 0)
		{
			puts("\a正でない数を入力しないでください。");
		}
	} while (no <= 0);

	printf("%dは", no);
	while (no > 0)
	{
		no /= 10;
		count++;
	}
	printf("%d桁です。", count);

	return 0;
}