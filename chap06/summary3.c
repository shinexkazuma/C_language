//配列aの全要素の平均を実数で返す
double ave_ary(const int a[], int n)
{
	int i;
	double sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum / n;
}