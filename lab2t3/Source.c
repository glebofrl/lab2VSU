#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	float n = 3, L = 133;
	int k = 3, m = 1;

	printf("����:\n%12.0f\n%12.0f\n        _______\n�����:\n        %+08.3f", n, L, n/L );

	getchar();
}