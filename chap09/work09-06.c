#include <stdio.h>

int str_chnum(const char s[], int c)
{
	int cnt = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'c')
		{
			cnt++;
		}
	}
	return cnt;
}

int main(void)
{
	int result;
	char str[128]; //ナル文字を含めて１２８文字まで格納できる。

	printf("文字列を入力してください：");
	scanf("%s", str);

	result = str_chnum(str, 'c');

	printf("文字cの個数は%d個です。\n", result);

	return 0;
}