#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	printf("123\n");
	printf("\n");

	printf("1\n2\n3\n");
	printf("\n");

	printf("1\n\t2\n\t\t3\n"); 
	printf("\n");

	printf("%d\n%2d\n%3d\n%4d\n", 1, 2, 3, 4);
	printf("\n");

	printf("%10.3f\n ", 12.234657);
	printf("\n");

	printf("%10.5f\n ", 12.234657);
	printf("\n");

	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("\n");

	printf("Частное от деления %d на %d равно %.2f\n ", 7, 5, 7.0 / 5.0);
	printf("\n");

	printf("Произведение от умножения %d на %d равно %d\n ", 2000, 4, 2000 * 4);
	printf("\n\n");


	printf("%g разделить %e равно %f\n ", 5., 2000000., 5. / 2000000);
	printf("\n");

	printf("%d разделить %d равно %d\n ", 5., 2000000., 5. / 2000000);
	printf("\n");

	printf("%f разделить %f равно %f\n ", 5., 2000000., 5. / 2000000);
	printf("\n");

	printf("%g разделить %g равно %g\n ", 5., 2000000., 5. / 2000000);
	printf("\n");

	printf("%e разделить %e равно %e\n ", 5., 2000000., 5. / 2000000);
	printf("\n");

	getchar();
}