#include <stdio.h>

int main(void)
{
	int ch;
	int compare;
	FILE *sfp;				  //コピー元ファイル
	FILE *dfp;				  //コピー先ファイル
	char sname[FILENAME_MAX]; //コピー元のファイル名
	char dname[FILENAME_MAX]; //コピー先のファイル名

	printf("コピー元ファイル名：");
	scanf("%s", sname);
	printf("コピー先ファイル名：");
	scanf("%s", dname);

	if ((sfp = fopen(sname, "rb")) == NULL) //ファイル元をオープン
	{
		printf("コピー元ファイルをオープンできません。\n");
	}
	else
	{
		if ((dfp = fopen(dname, "wb")) == NULL) //コピー先をオープン
		{
			printf("\aコピー先ファイルをオープンできません。\n");
		}
		else
		{
			while ((fread(&ch, sizeof(int), 1, sfp)) > 0)
			{
				fwrite(&ch, sizeof(int), 1, dfp);
			}
			fclose(dfp); //コピー先をクローズ
		}
		fclose(sfp); //コピー元をクローズ
	}

	return 0;
}