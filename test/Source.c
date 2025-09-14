#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");

	float n = 4, L = 393;
	int k = 2, m = 6;
	int sumkm = k + m;

	printf("%*.0f\n%*.0f\n_________\n%+0*.*f", sumkm+2, n, sumkm+2, L, sumkm+2, m, n / L);

	getchar();
}