#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");

	float a=21.317;
	printf("������� 33\n");
	printf("�������� �����: %.3f\n����: %.2f", a, a*10);

	getchar();
}