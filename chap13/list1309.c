//�~�����̒l���o�C�i���t�@�C���ɏ�������œǂݎ��

#include <stdio.h>

int main(void)
{
	FILE *fp;
	double pi = 3.14159265358979323846;

	printf("�ϐ�pi������o�����~������%23.21f�ł��B\n", pi);

	//��������
	if ((fp = fopen("PI.bin", "wb")) == NULL) //�I�[�v��
	{
		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
	}
	else
	{
		fwrite(&pi, sizeof(double), 1, fp); //pi����������
		fclose(fp);							//�N���[�Y
	}

	//�ǂݎ��
	if ((fp = fopen("PI.bin", "rb")) == NULL) //�I�[�v��
	{
		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
	}
	else
	{
		fread(&pi, sizeof(double), 1, fp); //pi�ɓǂݎ��
		printf("�t�@�C������ǂݎ�����~������%23.21f�ł��B\n", pi);
		fclose(fp); //�N���[�Y
	}

	return 0;
}