#include <stdio.h>

int main(void)
{
	int i, j, input;

	printf("何段ですか：");
	scanf("%d", &input);

	for (i = 1; i <= input; i++)
	{
		//putchar('*');
		for (j = 1; j <= input; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}