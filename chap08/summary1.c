#include <stdio.h>

enum RGB
{
	Red,
	Green,
	Blue
};

int main(void)
{
	int color;

	printf("０〜２の値：");
	scanf("%d", &color);

	printf("あなたは");
	switch (color)
	{
	case Red:
		printf("赤");
		break;
	case Green:
		printf("緑");
		break;
	case Blue:
		printf("青");
		break;
	}
	printf("を選びました。\n");

	return 0;
}