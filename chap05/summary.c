//�T�͂܂Ƃ�

#include <stdio.h>

#define SIZE 5 //�z��a��b�̗v�f��

int main(void)
{
	int i, j;
	int sum;

	//�z��a��b��int[5]�^��1�����z��i�v�f�^��int�ŗv�f���͂T�j
	int a[SIZE];			 //�S�v�f��s��l�ŏ�����
	int b[SIZE] = {1, 2, 3}; //{1,2,3,0,0}�ŏ�����

	//�z��c��int[2][3]�^�̂Q�����z��i�v�f�^��int[3]�ŗv�f���͂Q�j
	int c[2][3] = {{11, 22, 33}, {44, 55, 66}};

	//�z��b�̑S�v�f��a�ɃR�s�[
	for (i = 0; i < SIZE; i++)
	{
		a[i] = b[i];
	}

	//�z��a�̑S�v�f�̒l��\��
	for (i = 0; i < SIZE; i++)
	{
		printf("a[%d]�@���@%d\n", i, a[i]);
	}

	//�z��b�̑S�v�f�̒l��\��
	for (i = 0; i < SIZE; i++)
	{
		printf("b[%d]�@���@%d\n", i, b[i]);
	}

	//�z��a�̑S�v�f�̍��v��sum�ɋ��߂ĕ\��
	sum = 0;
	for (i = 0; i < SIZE; i++)
	{
		sum += a[i];
	}
	printf("�z��a�̑S�v�f�̍��v��%d\n", sum);

	//�z��c�̑S�\���v�f�̒l��\��
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("c[%d][%d]�@���@%d\n", i, j, c[i][j]);
		}
	}

	return 0;
}