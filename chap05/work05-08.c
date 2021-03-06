#include <stdio.h>

#define NUMBER 80 //人数の上限

int main(void)
{
	int i, j;
	int num;					//実際の人数
	int score[NUMBER];			//学生の点数
	int distribution[11] = {0}; //点数の分布

	printf("人数を入力してください：");

	do
	{
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
		{
			printf("\a１〜%dで入力してください：", NUMBER);
		}
	} while (num < 1 || num > NUMBER);

	printf("%d人の点数を入力してください。\n", num);

	for (i = 0; i < num; i++)
	{
		printf("%2d番：", i + 1);
		do
		{
			scanf("%d", &score[i]);
			if (score[i] < 0 || score[i] > 100)
			{
				printf("０〜１００で入力してください：");
			}
		} while (score[i] < 0 || score[i] > 100);
		distribution[score[i] / 10]++;
	}

	puts("\n---分布グラフ---");
	for (i = 0; i <= 9; i++) //100点未満
	{
		printf("%3d 〜%3d：", i * 10, i * 10 + 9);
		for (j = 0; j < distribution[i]; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	printf("      100："); //100点

	for (j = 0; j < distribution[10]; j++)
	{
		putchar('*');
	}
	putchar('\n');

	return 0;
}