//最高点を求める

#include <stdio.h>

#define NUMBER 5 //学生の人数

int score[NUMBER]; //配列の定義

int top(void); //関数topの関数原型宣言

int main(void)
{
	extern int score[]; //配列の宣言
	int i;

	printf("%d人の点数を入力してください。\n", NUMBER);
	for (i = 0; i < NUMBER; i++)
	{
		printf("%d：", i + 1);
		scanf("%d", &score[i]);
	}
	printf("最高点＝%d\n", top());

	return 0;
}

//--- 配列scoreの最大値を返す関数topの関数定義
int top(void)
{
	extern int score[]; //配列の宣言
	int i;
	int max = score[0];

	for (i = 1; i < NUMBER; i++)
	{
		if (score[i] > max)
		{
			max = score[i];
		}
	}
	return max;
}