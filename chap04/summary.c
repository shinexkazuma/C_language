#include <stdio.h>

int main(void)
{
	int i, j;
	int x, y, z;

	do
	{
		printf("O`POOÌ®lF");
		scanf("%d", &x);
	} while (!(x >= 0 && x <= 100));

	y = x;
	z = x;
	while (y >= 0)
	{
		printf("%d@%d\n", y--, ++z);
	}

	printf("c¡ª®ÅÊÏª%d"
		   "Ì·û`ÌÓÌ·³F\n",
		   x);

	for (i = 1; i < x; i++)
	{
		if (i * i > x)
			break; //break¶
		if (x % i != 0)
			continue; //continue¶
		printf("%d@X@%d\n", i, x / i);
	}

	puts("TsVñÌAX^XN");
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 7; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}