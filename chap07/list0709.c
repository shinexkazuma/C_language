//浮動小数点型の変数の値を表示

#include <stdio.h>

int main(void)
{
	float a = 12345678901234567890123456789.0;
	double b = 12345678901234567890123456789.0;
	long double c = 12345678901234567890123456789.0;

	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("c = %Lf\n", c);

	return 0;
}