//�ǂݍ��񂾎O�̐����l�̍ő�l�����߂ĕ\��

#include <stdio.h>

int main(void)
{
	int n1, n2, n3, max;

	puts("�O�̐�������͂��Ă��������B");
	printf("����1:");
	scanf("%d", &n1);
	printf("����2:");
	scanf("%d", &n2);
	printf("����3:");
	scanf("%d", &n3);

	max = n1;
	if (n2 > max)
	{
		max = n2;
	}
	if (n3 > max)
	{
		max = n3;
	}

	printf("�ő�l��%d�ł��B\n",max);

	return 0;
}