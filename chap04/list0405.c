//�ǂݍ��񂾐����l���O�܂ŃJ�E���g�_�E��

#include <stdio.h>

int main(void)
{
	int no;

	printf("���̐�������͂��Ă�������:");
	scanf("%d", &no);

	while (no >= 0)
	{
		printf("%d ", no);
		no--; //no�̒l���f�N�������g
	}
	printf("\n"); //���s

	return 0;
}