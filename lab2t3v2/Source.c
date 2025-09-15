#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	float n = 4, L = 393;
	int k = 2, m = 6;
	int sumkm = k + m;

	printf("Дано:\n\t%*.0f\n\t%*.0f\n\t__________\nОтвет:\n\t%+0*.*f", sumkm + 2, n, sumkm + 2, L, sumkm + 2, m, n / L);

	getchar();
}